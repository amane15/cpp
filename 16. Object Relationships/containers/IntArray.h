#ifndef INTARRAY_H
#define INTARRAY_H

#include <cassert>
#include <initializer_list>
#include <iostream>

class IntArray {
   private:
    int m_length{};
    int* m_data{};

   public:
    IntArray() = default;

    IntArray(int length) : m_length{length} {
        assert(length >= 0);

        if (length > 0) {
            m_data = new int[length]{};
        }
    }

    // Copy constructor
    IntArray(const IntArray& a) {
        // set the size of new array appropriately
        reallocate(a.getLength());

        // then copy the elements
        for (int i{0}; i < m_length; ++i) {
            m_data[i] = a.m_data[i];
        }
    }

    // for list initialization
    IntArray(std::initializer_list<int> list)
        : IntArray(static_cast<int>(list.size())) {  // deletegating constructor to set up initial array
        int count{0};
        for (auto element : list) {
            m_data[count] = element;
            ++count;
        }
    }

    ~IntArray() {
        delete[] m_data;
    }

    void erase() {
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }

    int& operator[](int index) {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    int getLength() const { return m_length; }

    void reallocate(int newLength) {
        erase();

        if (newLength <= 0) return;

        m_data = new int[newLength];
        m_length = 0;
    }

    void resize(int newLength) {
        // if the array is already the right length, we're done
        if (newLength == m_length) return;

        // If we are resizing to an empty array, do that and return
        if (newLength <= 0) {
            erase();
            return;
        }

        // allocate new array
        int* data{new int[newLength]};

        if (m_length > 0) {
            int elementsToCopy{(newLength > m_length) ? m_length : newLength};

            for (int i{0}; i < elementsToCopy; ++i) {
                data[i] = m_data[i];
            }
        }

        delete[] m_data;
        m_data = data;
        m_length = newLength;
    }

    IntArray& operator=(const IntArray& a) {
        // self-assignment check
        if (&a == this) return *this;

        reallocate(a.getLength());

        for (int i{0}; i < m_length; ++i) {
            m_data[i] = a.m_data[i];
        }

        return *this;
    }

    void insertBefore(int value, int index) {
        // sanity check our index values
        assert(index >= 0 && index <= m_length);

        // first create a new array one element larger than the old array
        int* data{new int[m_length + 1]};

        // copy all the elements up to the index
        for (int i{0}; i < index; ++i) {
            data[i] = m_data[i];
        }

        // insert our new element into the new array
        data[index] = value;

        // copy all the values after the inserted element
        for (int i{index + 1}; i < m_length; ++i) {
            data[i] = m_data[i];
        }

        // finally, delete the old array, and use the new array instead
        delete[] m_data;
        m_data = data;
        ++m_length;
    }

    void remove(int index) {
        // sanity check our index value
        assert(index >= 0 && index < m_length);

        // if this is the last remaining element in the array, set the array to empty and bail out
        if (m_length == 1) {
            erase();
            return;
        }

        // first create a new array one element smaller than the old array
        int* data{new int[m_length - 1]};

        // copy all the elements upto the index
        for (int i{0}; i < index; ++i) {
            data[i] = m_data[i];
        }

        // copy all the elements after the removed elements
        for (int i{index}; i < m_length; ++i) {
            data[i] = m_data[i];
        }

        // delete the old array, and use the new array instead
        delete[] m_data;
        m_data = data;
        --m_length;
    }

    void insertAtTheBeginning(int value) {
        insertBefore(value, 0);
    }

    void insertAtTheEnd(int value) {
        insertBefore(value, m_length);
    }
};

#endif
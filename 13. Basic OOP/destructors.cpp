#include <cassert>
#include <cstddef>
#include <iostream>

class IntArray {
   private:
    int* m_array{};
    int m_length{};

   public:
    IntArray(int length) {
        assert(length > 0);

        m_array = new int[static_cast<std::size_t>(length)]{};
        m_length = length;
    }

    ~IntArray() {
        delete[] m_array;
    }

    void setValue(int index, int value) {
        m_array[index] = value;
    }

    int getValue(int index) {
        return m_array[index];
    }

    int getLength() {
        return m_length;
    }
};
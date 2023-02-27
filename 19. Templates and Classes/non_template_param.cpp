#include <iostream>

template <typename T, int size>
class StaticArray {
   private:
    T m_array[size]{};

   public:
    T* getArray();

    T& operator[](int index) {
        return m_array[index];
    }
};

// Showing how a function for a class with a non-type parameter is defined outside of the class
template <typename T, int size>
T* StaticArray<T, size>::getArray() {
    return m_array;
}

// Partial template specialization
template <int size>
void print(StaticArray<char, size>& array) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i];
    }
}

int main() {
    StaticArray<int, 12> intArray;

    for (int i{0}; i < 12; ++i) {
        intArray[i] = i;
    }
}
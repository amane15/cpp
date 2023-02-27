#include <iostream>

template <typename T>
class Storage {
   private:
    T m_value{};

   public:
    Storage(T value) : m_value{value} {}

    void print() {
        std::cout << m_value << '\n';
    }
    // need an explicitly defined destructor to specialize
    ~Storage() {}
};

template <>
void Storage<double>::print() {
    std::cout << std::scientific << m_value << '\n';
}

template <>
Storage<char*>::Storage(char* const value) {
    if (!value) return;

    // figure out how long the string in value is
    int length{0};
    while (value[length] != 0) ++length;
    ++length;  // +1 to account for null terminator

    // Allocate memory to hold the value string
    m_value = new char[length];

    // Copy the value string into the m_value memory we just allocated
    for (int i = 0; i < length; ++i) {
        m_value[i] = value[i];
    }
}

template <>
Storage<char*>::~Storage() {
    delete[] m_value;
}
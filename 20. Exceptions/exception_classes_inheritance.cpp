#include <exception>
#include <iostream>
#include <string>
#include <string_view>

class ArrayException : public std::exception {
   private:
    std::string m_error{};

   public:
    ArrayException(std::string_view error) : m_error{error} {}

    const char* what() const noexcept override {
        return m_error.c_str();
    }
};
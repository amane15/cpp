#include <string>

const std::string& getConstRef();  // some function that returns a const reference

int main() {
    // const int x;     // this const applies to x, so it is top-level
    // int* const ptr;  // this const applies to ptr, so it is top-level

    // const int& ref;  // this const applies to the object being referenced, so it is low-level
    // const int* ptr;  // this const applies to the object being pointed to, so it is low-level

    // const int* const ptr;  // the left const is low-level, the right const is top-level

    auto ref1{getConstRef()};        // std::string (top-level const and reference dropped)
    const auto ref2{getConstRef()};  // const std::string (const reapplied, reference dropped)

    auto& ref3{getConstRef()};        // const std::string& (reference reapplied, low-level const not dropped)
    const auto& ref4{getConstRef()};  // const std::string& (reference and const reapplied)

    // Type deduction and pointers
    // Unlike references, type deduction does not drop pointers:

    return 0;
}
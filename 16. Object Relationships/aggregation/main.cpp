#include <iostream>

#include "Department.h"
#include "Teacher.h"

int main() {
    // Create a teacher outside the scope of the department
    Teacher teacher{"Bob"};

    {
        Department dept{teacher};
    }  // department goes out of scope here and is destroyed
    // but teacher still exists here

    std::cout << teacher.getName() << '\n';

    return 0;
}
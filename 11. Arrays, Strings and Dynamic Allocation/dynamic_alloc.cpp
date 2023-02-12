#include <iostream>

// Memory leak example 1
void memoryLeakExample() {
  int* ptr{new int{}};
}

int main() {
  int* ptr{new int};

  *ptr = 10;

  std::cout << ptr << '\n';
  std::cout << *ptr << '\n';

  delete ptr;    // return the memory to the operating system
  ptr = nullptr; // to avoid dangling pointer

  int* ptr1{new int(5)};
  int* ptr2{new int{6}};

  int* value{new (std::nothrow) int};

  // Memory leak example 2
  int x = 5;
  int* ptr3{new int{}}; // allocate memory
  ptr3 = &x;            // old address lost

  // Memory leak example 3
  int* ptr4{new int};
  ptr = new int;

  return 0;
}

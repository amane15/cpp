#include <iostream>

// argc is an integer parameter containing a count of the
// number of arguments passed to the program

// argv is where the actual argument values are stored
int main(int argc, char* argv[]) {
  std::cout << "There are " << argc << " arguments \n";

  for (int count{0}; count < argc; ++count) {
    std::cout << count << ' ' << argv[count] << '\n';
  }

  return 0;
}
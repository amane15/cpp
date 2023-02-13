#include <cstdarg>
#include <iostream>

// elipsis must be last parameter
double findAverage(int count, ...) {
  int sum{0};

  std::va_list list;

  va_start(list, count);

  for (int arg{0}; arg < count; ++arg) {
    sum += va_arg(list, int);
  }

  va_end(list);

  return static_cast<double>(sum) / count;
}

int main() {}
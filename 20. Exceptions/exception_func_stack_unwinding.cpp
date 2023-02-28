#include <cmath>
#include <iostream>

double mySqrt(double x) {
    if (x < 0.0) {
        throw "Can not take sqrt of negative number";
    }
    return std::sqrt(x);
}

int main() {
    std::cout << "Enter a number: ";
    double x{};
    std::cin >> x;

    try {
        double result = mySqrt(x);
        std::cout << "The square root of " << x << " is " << result << '\n';
    } catch (const char* exception) {
        std::cerr << "Error: " << exception << std::endl;
    } catch (...) {
        std::cerr << "We caught exception of undetermined type\n";
    }

    return 0;
}
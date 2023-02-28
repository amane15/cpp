#include <iostream>
#include <string>

int main() {
    try {
        throw -1;
    } catch (int x) {
        std::cerr << "We caught an int exception with value: " << x << '\n';
    } catch (double) {
        std::cerr << "We caught an exception of type double" << '\n';
    } catch (const std::string&) {
        std::cerr << "We caught an exception of type std::string" << '\n';
    }

    std::cout << "execution continues\n";
    return 0;
}
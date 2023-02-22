#include <functional>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string cat{"cat"};
    std::string dog{"dog"};

    std::vector<std::reference_wrapper<std::string>> names{cat, dog};
    // std::vector<std::reference_wrapper<const std::string>> names{cat, dog};

    std::string lion{"lion"};
    names.push_back(lion);

    for (auto name : names) {
        name.get() += " Beam";
    }

    std::cout << lion << '\n';

    return 0;
}
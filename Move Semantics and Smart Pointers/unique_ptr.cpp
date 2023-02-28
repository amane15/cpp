#include <iostream>
#include <memory>

class Resource {
   public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }

    friend std::ostream& operator<<(std::ostream& out, const Resource& res) {
        out << "I am a resource";
        return out;
    }
};

int main() {
    std::unique_ptr<Resource> res1{new Resource{}};  // Resource created here
    std::unique_ptr<Resource> res2{};                // Start as nullptr

    std::cout << "res1 is " << (res1 ? "not null\n" : "null\n");
    std::cout << "res2 is " << (res2 ? "not null\n" : "null\n");

    // res2 = res1; // Won't compile: copy assignment is disabled
    res2 = std::move(res1);  // res2 assumes ownership, res1 is set to null

    std::cout << "Ownership transferred\n";

    std::cout << "res1 is " << (res1 ? "not null\n" : "null\n");
    std::cout << "res2 is " << (res2 ? "not null\n" : "null\n");

    std::unique_ptr<Resource> res3{new Resource()};
    if (res3) {
        std::cout << *res3 << '\n';
    }

    auto res4{std::make_unique<Resource>()};
    std::cout << *res4 << '\n';

    return 0;
}  // Resource destroyed here when res2 goes out of scope

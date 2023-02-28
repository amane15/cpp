#include <iostream>

template <typename T>
class Auto_ptr2 {
   private:
    T* m_ptr;

   public:
    Auto_ptr2(T* ptr = nullptr) : m_ptr{ptr} {}

    ~Auto_ptr2() {
        delete m_ptr;
    }

    T& operator*() const {
        return *m_ptr;
    }

    T* operator->() const {
        return m_ptr;
    }
};

class Resource {
   public:
    Resource() {
        std::cout << "Resource acquired\n";
    }

    ~Resource() {
        std::cout << "Resource destroyed\n";
    }

    void sayHi() {
        std::cout << "Hi\n";
    }
};

void someFunction() {
    Auto_ptr2<Resource> res(new Resource());

    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;

    if (x == 0) return;

    res->sayHi();
}

int main() {
    Auto_ptr2<Resource> res1(new Resource());
    Auto_ptr2<Resource> res2(res1);

    return 0;
}
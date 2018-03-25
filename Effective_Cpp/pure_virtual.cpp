#include <iostream>

class Base {
public:
    Base() { std::cout << "Base()" << std::endl; }
    virtual ~Base() = 0;
    virtual int getTime() = 0;
};

Base::~Base() {
    getTime();
    std::cout << "~Base()" << std::endl;
}
int Base::getTime() { return 0; }

class Derived : public Base {
public:
    Derived() { std::cout << "Derived()" << std::endl; }
    ~Derived() { std::cout << "~Derived()" << std::endl; }
    int getTime();
};

int Derived::getTime() { return 0; }

int main() { Derived der; }

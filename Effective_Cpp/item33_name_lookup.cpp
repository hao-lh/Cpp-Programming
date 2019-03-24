#include <iostream>

class Base {
public:
    virtual void mf1() = 0;
    virtual void mf1(int) { std::cout << "Base::mf1(int)" << std::endl; }
    virtual void mf2() { std::cout << "Base::mf2()" << std::endl; }
    void mf3() { std::cout << "Base::mf3()" << std::endl; }
    void mf3(double) { std::cout << "Base::mf3(double)" << std::endl; }

private:
    int x;
};

class Derived : public Base {
public:
    using Base::mf1;
    using Base::mf3;
    virtual void mf1() { std::cout << "Derived::mf1()" << std::endl; }
    void mf3() { std::cout << "Derived::mf3()" << std::endl; }
    void mf4() { std::cout << "Derived::mf4()" << std::endl; }
};

int main() {
    Derived d;
    int x = 5;
    d.mf1();
    d.mf1(x);
    d.mf2();
    d.mf3();
    d.mf3(x);
}

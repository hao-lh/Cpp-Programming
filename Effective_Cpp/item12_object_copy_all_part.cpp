#include <iostream>

class Base {
public:
    Base() { std::cout << "Base()" << std::endl; }
    Base(std::string name, int age, bool sex)
        : m_name(name), m_age(age), m_sex(sex) {
        std::cout << "Base(std::string, int, bool)" << std::endl;
    }
    ~Base() { std::cout << "~Base()" << std::endl; }
    Base(Base const& base) {
        std::cout << "Base(Base const&)" << std::endl;
        m_name = base.m_name;
        m_age = base.m_age;
        m_sex = base.m_sex;
    }
    Base& operator=(Base const& rhs) {
        std::cout << "Base& operator=(Base const& rhs)" << std::endl;
        m_name = rhs.m_name;
        m_age = rhs.m_age;
        m_sex = rhs.m_sex;
        return *this;
    }

private:
    std::string m_name;
    int m_age;
    bool m_sex;
};

class Derived : public Base {
public:
    Derived() { std::cout << "Derived()" << std::endl; }
    ~Derived() { std::cout << "~Derived()" << std::endl; }
    Derived(int salary) : Base(), m_salary(salary) {
        std::cout << "Derived(int salary)" << std::endl;
    }
    Derived(std::string name, int age, bool sex, int salary)
        :  // m_name(name), m_age(age), m_sex(sex),
          Base(name, age, sex),
          m_salary(salary) {
        std::cout << "Derived(std::string name, int age, bool sex, int salary)"
                  << std::endl;
    }

private:
    int m_salary;
};

int main() {
    Base b1;
    Base b2("Xiao Ming", 25, 1);
    Base b3(b2);
    b1 = b3;
    Derived d1;
    Derived d2(10000);
    Derived d3("Han Meimei", 21, 0, 25000);
}

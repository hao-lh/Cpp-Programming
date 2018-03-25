#include <iostream>

class Rational {
public:
    Rational(double const val = 0.0) : m_val(val) {}
    Rational const operator*(Rational const& rhs) {
        return Rational(this->m_val * rhs.m_val);
    }

private:
    double m_val;
};

int main() {
    int a = 6, b = 3, c = 2;
    if (b* c = a)
        // if (a = b * c)
        std::cout << "equals" << std::endl;
    else
        std::cout << "Not equal" << std::endl;

    Rational ra(1.2);
    Rational rb(1.3);
    Rational rc(1.56);

    if (ra* rb = rc)
        std::cout << "equals" << std::endl;
    else
        std::cout << "Not equal" << std::endl;
}

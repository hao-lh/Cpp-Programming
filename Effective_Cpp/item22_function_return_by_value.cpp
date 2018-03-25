#include <iostream>

static int CLS_COUNT = 0;
class Rational {
public:
    Rational(int n = 0, int d = 1) : m_n(n), m_d(d) {
        std::cout << "Rational ctor: " << ++CLS_COUNT << std::endl;
    }

    Rational(Rational const& rhs) {
        std::cout << "Rational copy ctor" << std::endl;
        m_n = rhs.m_n;
        m_d = rhs.m_d;
    }

    ~Rational() { std::cout << "Rational dtor: " << --CLS_COUNT << std::endl; }

    Rational const operator*(Rational const& rhs) {
        // return Rational(lhs.n * rhs.n, lhs.d * rhs.d);
        // return Rational(m_n * rhs.m_n, m_d * rhs.m_d);
        Rational result(m_n * rhs.m_n, m_d * rhs.m_d);
        return result;
    }

private:
    int m_n;
    int m_d;
};

int main() {
    Rational a(2, 5);
    Rational b(3, 7);
    Rational c = a * b;
}

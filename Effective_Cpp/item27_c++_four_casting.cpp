#include <iostream>

int main() {
    /*     int val = -1; */
    // std::cout << "signed value = " << val << std::endl;
    //
    // unsigned int uval = reinterpret_cast<unsigned int>(val);
    /* std::cout << "unsigned value = " << uval << std::endl; */

    int val = 10;
    std::cout << val << std::endl;
    int const val = const_cast<int const>(val);
    // int const cval = static_cast<int const>(val);
    // std::cout << cval << std::endl;
    int const cval = 15;
    int cval = const_cast<int>(cval);
    std::cout << cval << std::endl;
}

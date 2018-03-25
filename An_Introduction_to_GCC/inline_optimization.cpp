#include <chrono>
#include <iostream>

inline double square(double i) { return i * i; }

int main() {
    std::chrono::high_resolution_clock::time_point ft1 =
        std::chrono::high_resolution_clock::now();
    double sum = 0.0;
    for (int i = 0; i < 1000000; i++) {
        sum += square(i + 0.5);
    }
    std::cout << sum << std::endl;

    std::chrono::high_resolution_clock::time_point ft2 =
        std::chrono::high_resolution_clock::now();
    std::cout << "frequency convolution time: "
              << std::chrono::duration_cast<std::chrono::microseconds>(ft2 -
                                                                       ft1)
                     .count()
              << " us" << std::endl;
}

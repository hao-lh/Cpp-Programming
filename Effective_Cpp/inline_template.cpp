#include <iostream>

// #define CALL_WITH_MAX(a, b) f((a) > (b) ? (a) : (b))

int f(int val) {
	std::cout << val << std::endl;
	return val * val;
}

template <typename T>
inline void callwithMax(const T& a, const T& b) {
	f(a > b ? a : b);
}

int main() {
	int a = 10;
	// int a = 0;
	int b = 5;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	callwithMax(a, b);

	// CALL_WITH_MAX(++a, b);
}

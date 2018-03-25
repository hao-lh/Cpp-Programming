#include <iostream>

// using namespace std;

class Widge {
    public:
	static int const numTurns = 5;
	// static double const dPi = 3.1415926;
	static double const dPi;
};

int const Widge::numTurns;
// int const Widge::numTurns = 10;
double const Widge::dPi = 3.1415926;

int main() {
	std::cout << Widge::numTurns << std::endl;
	// Widge::numTurns	= 10;
	std::cout << Widge::dPi << std::endl;
	// std::cout << Widge::numTurns;
}

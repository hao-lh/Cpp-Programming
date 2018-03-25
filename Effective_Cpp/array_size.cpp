#include <iostream>

class Widge {
    public:
	void initArray() {
		for (int i = 0; i < numArray; i++) iArray[i] = i;
	}

	void printArray() {
		for (int i = 0; i < numArray; i++)
			std::cout << iArray[i] << std::endl;
	}

    private:
	enum { numArray = 5 };
	int iArray[numArray];
};

int main() {
	Widge wid;
	wid.initArray();
	wid.printArray();
}

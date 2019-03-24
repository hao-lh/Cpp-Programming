#include <iostream>
#include<string>

class classDemo
{
public:
	classDemo(std::string str)
		:m_str(str)
	{
		std::cout << "classDemo() constructed " << m_str << std::endl;
	}

	~classDemo()
	{
		std::cout << "~classDemo() destructed " << m_str << std::endl;
	}

private:
	std::string m_str;
};

int main()
{
	// std::unique_ptr<classDemo> ptr1 = std::make_unique<new classDemo>;
	// std::unique_ptr<classDemo> ptr2 = std::make_unique<new classDemo>;

	std::unique_ptr<classDemo> ptr1 (new classDemo("123"));
	std::unique_ptr<classDemo> ptr2 (new classDemo("234"));

	ptr1 = ptr2;

	return 0;
}
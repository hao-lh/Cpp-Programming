#include <iostream>
#include <cassert>

class Rational
{
public:
	Rational(int norm = 0, int denorm = 1) : 
	m_norm(norm), m_denorm(denorm)
	{}
	// operator double() const
	// {
	// 	return m_norm;
	// }
	double asDouble() const
	{
		return m_norm;
	}
	int norminal()
	{
		return m_norm;
	}
	int denorminal()
	{
		return m_denorm;
	}

private:
	int m_norm;
	int m_denorm;
};

template<typename T>
class Array
{
public:
	Array(int low, int high)
	{
		if (low >= high)
			throw;
		else
			m_size = high - low;
		m_Array = new T[m_size];
	}
	Array(int size)
	{
		if (size<0)
			throw;
		else
			m_size = size;
		m_Array = new T[m_size];
	}
	~Array()
	{
		delete []m_Array;
	}
	T & operator[] (int index)
	{
		if (index < 0 || index >= m_size)
			throw;
		return m_Array[index];
	}
	int size()
	{
		return m_size;
	}

private:
	T *m_Array;	
	int m_size;
};

bool operator== (Array<int> &lhs, Array<int> &rhs)
{
	assert(lhs.size() == rhs.size());
	for (int i=0; i<lhs.size(); i++)
		if (lhs != rhs[i])
			return false;

	return true;
}


int main()
{
	Rational rt (5,1);
	// std::cout << rt << std::endl;
	std::cout << rt.asDouble() << std::endl;

	int const sz = 10;
	Array<int> a(sz);
	Array<int> b(sz);
	for (int i=0; i<sz; i++)
	{
		a[i] = i;
		b[i] = -i;
		std::cout << "a[" << i << "] = " << a[i] << ", b[" << i << "] = " << b[i] << std::endl;
	}

	// for (int i=0; i<sz; i++)
	// 	if (a == b[i])
	// 		std::cout << "a[" << i << "] == b[" << i << "]" << std::endl;
	// 	else
	// 		std::cout << "a[" << i << "] != b[" << i << "]" << std::endl;

	a == b;

}
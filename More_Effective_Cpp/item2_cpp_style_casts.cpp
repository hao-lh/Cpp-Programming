#include <iostream>

// #define static_cast(type,express) (type)(express)
// #define const_cast(type,express) (type)(express)
// #define dynamic_cast(type,express) (type)(express)

class Base
{
public:
	Base() {
		std::cout << "Base::Base()" << std::endl;
	} 
	virtual ~Base()
	{
		std::cout << "Base::~Base()" << std::endl;	
	}

	virtual void doSomething()
	{
		std::cout << "Base::doSomething()" << std::endl;	
	}
};

class Derived:public Base
{
public:
	Derived()
	{
		std::cout << "Derived::Derived()" << std::endl;
	}
	~Derived()
	{
		std::cout << "Derived::~Derived()" << std::endl;
	}
	void doSomething()
	{
		std::cout << "Derived::doSomething()" << std::endl;	
	}
	void doSomething() const
	{
		std::cout << "Derived::doSomething() const" << std::endl;	
	}
};

class Foo:public Derived
{
public:
	Foo()
	{
		std::cout << "Foo::Foo()" << std::endl;
	}
	~Foo()
	{
		std::cout << "Foo::~Foo()" << std::endl;
	}
	void doSomething()
	{
		std::cout << "Foo::doSomething()" << std::endl;	
	}
};

int main()
{
	int i = 100;
	std::cout << "i = " << i << std::endl;
	std::cout << "static_cast<double>(i) = " << static_cast<double>(i) << std::endl;

	Base *pBase = new Derived();
	if (pBase)
		pBase->doSomething();

	Derived *pDerived = dynamic_cast<Derived*>(pBase);
	std::cout << "dynamic_cast<Derived*>(pBase) " <<  (pDerived ? "succeeded" : "failed") << std::endl;
	if (pDerived)
		pDerived->doSomething();

	Foo *pFoo = dynamic_cast<Foo*>(pBase);
	std::cout << "dynamic_cast<Foo*>(pBase) " <<  (pFoo ? "succeeded" : "failed") << std::endl;
	if (pFoo)
		pFoo->doSomething();

	Base *pBase2 = dynamic_cast<Base*>(pDerived);
	std::cout << "dynamic_cast<Base*>(pDerived) " <<  (pBase2 ? "succeeded" : "failed") << std::endl;
	if (pBase2)
		pBase2->doSomething();

	Base *pBase3 = static_cast<Base*>(pDerived);
	std::cout << "static_cast<Base*>(pDerived) " <<  (pBase3 ? "succeeded" : "failed") << std::endl;
	if (pBase3)
		pBase3->doSomething();

	Derived const * pcDerived = static_cast<Derived const *>(pDerived);
	std::cout << "static_cast<Derived const *>(pDerived) " <<  (pcDerived ? "succeeded" : "failed") << std::endl;
	if (pcDerived)
		pcDerived->doSomething();

	Derived *pDerived2 = const_cast<Derived*>(pcDerived);
	std::cout << "const_cast<Derived*>(pcDerived) " <<  (pDerived2 ? "succeeded" : "failed") << std::endl;
	if (pDerived2)
		pDerived2->doSomething();

	Derived const * pDerived3 = const_cast<Derived const *>(pDerived);
	std::cout << "const_cast<Derived const *>(pDerived) " <<  (pDerived3 ? "succeeded" : "failed") << std::endl;
	if (pDerived3)
		pDerived3->doSomething();

	delete pBase;
}
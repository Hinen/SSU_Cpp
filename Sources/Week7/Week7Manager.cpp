#include "Week7Manager.h"

Week7Manager::Week7Manager() : WeekManagerBase(7)
{
	// DO NOTHING
}

Week7Manager::~Week7Manager()
{
	// DO NOTHING
}

void Week7Manager::Main() 
{
	WeekManagerBase::Main();

	//RefTest();
	SwapTest();
}

void Week7Manager::RefTest()
{
	int* p = new int(10);
	int* &r = p;
	delete r;	// ref can * delete
}

void Week7Manager::SwapTest()
{
	int* num1 = new int(10);
	int* num2 = new int(20);
	std::cout << *num1 << ", " << *num2 << std::endl;

	Swap(num1, num2);
	std::cout << *num1 << ", " << *num2 << std::endl;

	delete num1;
	delete num2;
}

template <typename T>
void Week7Manager::Swap(T* var1, T* var2)
{
	T temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}
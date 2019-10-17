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
	PrintValueData(num1, num2);

	SwapPointingValue(num1, num2);
	PrintValueData(num1, num2);

	SwapPointingAddress(&num1, &num2);
	PrintValueData(num1, num2);

	delete num1;
	delete num2;
}

template <typename T>
void Week7Manager::PrintValueData(T var1, T var2)
{
	std::cout << "Pointing Value : " << *var1 << ", " << *var2 << std::endl;
	std::cout << "Pointing Adress : " << var1 << ", " << var2 << std::endl;
	std::cout << "Pointer Adress : " << &var1 << ", " << &var2 << "\n" << std::endl;
}

template <typename T>
void Week7Manager::SwapPointingValue(T* var1, T* var2)
{
	T temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}

template <typename T>
void Week7Manager::SwapPointingAddress(T** var1, T** var2)
{
	T* temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}
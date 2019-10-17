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
	//SwapTest();
	//DefaultParamTest(0);
	OverloadingTest(3);
	OverloadingTest(3.5f);
	OverloadingTest(3.5);
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

void Week7Manager::DefaultParamTest(int num1, int num2, int num3)
{
	// 아니 무슨 헤더 선언에는 Default 값 넣으면서 정의에는 넣으면 안돼?
	// 아니 그러면 함수 정의만 봤을땐 Default 값이 있는지 어캐 알아 ㅠㅠ
	std::cout << num1 + num2 + num3 << std::endl;
}

void Week7Manager::OverloadingTest(int num1)
{
	std::cout << num1 << std::endl;
}

void Week7Manager::OverloadingTest(float num1)
{
	std::cout << num1 << std::endl;
}

void Week7Manager::OverloadingTest(double num1)
{
	std::cout << num1 << std::endl;
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
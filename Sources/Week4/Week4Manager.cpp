#include "Week4Manager.h"

Week4Manager::Week4Manager() : WeekManagerBase(4)
{
	
}

Week4Manager::~Week4Manager()
{
	
}

void Week4Manager::Main() 
{
	WeekManagerBase::Main();

	//stdCoutTest();
	//stdCinTest();
	//CppDataTypeTest();
	//ConditionTest();
	RepeatTest();
}

// private func
void Week4Manager::StdCoutTest()
{
	std::cout << 7;
	std::cout << 8;
	std::cout << 10;
	std::cout << "\n";
	std::cout << 3;
	std::cout << 3 << std::endl;
	std::cout << 2;
}

void Week4Manager::StdCinTest()
{
	int num1 = 0, num2 = 0;

	std::cout << "Please Input num1 : ";
	std::cin >> num1;

	std::cout << "Please Input num2 : ";
	std::cin >> num2;

	std::cout << "num1 : " << num1 << std::endl;
	std::cout << "num2 : " << num2 << std::endl;

	std::cout << "num1 + num2 : ";
	std::cout << num1 + num2 << std::endl;
}

void Week4Manager::CppDataTypeTest()
{
	char c = 'c';
	
	short s = 10;
	int i = 20;
	long l = 30;
	long long ll = 40;

	float f = 3.5f;
	double d = 5.6;

	std::cout << "Print Data Value" << std::endl;
	std::cout << "char c : " << c << std::endl;
	std::cout << "short s : " << s << std::endl;
	std::cout << "int i : " << i << std::endl;
	std::cout << "long l : " << l << std::endl;
	std::cout << "long long ll : " << ll << std::endl;
	std::cout << "float f : " << f << std::endl;
	std::cout << "double d : " << d << std::endl;

	std::cout << "\nPrint Data Type Size (byte)" << std::endl;
	std::cout << "char c size : " << sizeof(c) << std::endl;
	std::cout << "short s size : " << sizeof(s) << std::endl;
	std::cout << "int i size : " << sizeof(i) << std::endl;
	std::cout << "long l size : " << sizeof(l) << std::endl;
	std::cout << "long long ll size : " << sizeof(ll) << std::endl;
	std::cout << "float f size : " << sizeof(f) << std::endl;
	std::cout << "double d size : " << sizeof(d) << std::endl;
}

void Week4Manager::ConditionTest()
{
	int a = 10, b = 20;

	if (a > b)
		std::cout << a << std::endl;
	else if (a < b)
		std::cout << b << std::endl;
	else
		std::cout << "a, b is same" << std::endl;
}

void Week4Manager::RepeatTest()
{
	int num1 = 0;

	for (int i = 0; i < 10; i++)
	{
		num1++;
		std::cout << "for num1 : " << num1 << std::endl;
	}

	while (num1 < 20)
	{
		num1++;
		std::cout << "while num1 : " << num1 << std::endl;
	}

	int sum1 = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum1 += i;

		if (i != 10)
		{
			std::cout << i << " + ";
		}
		else 
		{
			std::cout << i << " = ";
		}
	}

	std::cout << sum1 << std::endl;
}
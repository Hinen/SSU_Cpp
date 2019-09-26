#include "Week4Manager.h"

Week4Manager::Week4Manager()
{
	std::cout << "Initializing Week4Manager..." << std::endl;
}

Week4Manager::~Week4Manager()
{
	std::cout << "Terminating Week4Manager..." << std::endl;
}

void Week4Manager::Main()
{
	std::cout << "Week 4 Main Start" << std::endl;

	//stdCoutTest();
	stdCinTest();
}

// private func
void Week4Manager::stdCoutTest()
{
	std::cout << 7;
	std::cout << 8;
	std::cout << 10;
	std::cout << "\n";
	std::cout << 3;
	std::cout << 3 << std::endl;
	std::cout << 2;
}

void Week4Manager::stdCinTest()
{
	int num1, num2;

	std::cout << "Please Input num1 : ";
	std::cin >> num1;

	std::cout << "Please Input num2 : ";
	std::cin >> num2;

	std::cout << "num1 : " << num1 << std::endl;
	std::cout << "num2 : " << num2 << std::endl;

	std::cout << "num1 + num2 : ";
	std::cout << num1 + num2 << std::endl;
}
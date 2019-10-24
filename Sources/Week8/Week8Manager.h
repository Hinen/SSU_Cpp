#pragma once
#include "../WeekManagerBase.h"

class Week8Manager : public WeekManagerBase
{
public:
	Week8Manager();
	~Week8Manager();

protected:
	class TestClass
	{
	public:
		TestClass(int i, char c) 
		{ 
			this->i = i;
			this->c = c;
		};
		~TestClass() {};

	public:
		int i;
		char c;

	public:
		void TestFunction();
	};

public:
	void Main();

private:
	void ClassTest();

private:
	TestClass* _testClass;
};


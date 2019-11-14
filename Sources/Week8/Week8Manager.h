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
		TestClass() {}
		TestClass(int i, char c) { this->TestClassInit(i, c); }
		~TestClass() {}

	private:
		int _i;
		char _c;
		bool _isInited;

	public:
		void TestClassInit(int i, char c)
		{
			_i = i;
			_c = c;
			_isInited = true;
		}
		void TestFunction();
	};

public:
	virtual void Main() override;

private:
	TestClass _testClass;
	TestClass* _testClassPtr;

private:
	void ClassTest();
};


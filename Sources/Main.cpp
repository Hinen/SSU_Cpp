#include "Stdafx.h"
#include "Manager.h"

//
using namespace std;

//
void CreateWeek4Manager();
void CreateWeek6Manager();

//
int main() {
	//CreateWeek4Manager();
	CreateWeek6Manager();

	return 1;
}

void CreateWeek4Manager() {
	Week4Manager *week4Manager = new Week4Manager();

	week4Manager->Main();

	delete week4Manager;
}

void CreateWeek6Manager() {
	Week6Manager *week6Manager = new Week6Manager();

	week6Manager->Main();

	delete week6Manager;
}
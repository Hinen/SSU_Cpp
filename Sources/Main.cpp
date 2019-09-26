#include <iostream>
#include "stdafx.h"

//
using namespace std;

//
int main() {
	Week4Manager *week4Manager = new Week4Manager();

	week4Manager->Main();

	delete week4Manager;

	return 1;
}
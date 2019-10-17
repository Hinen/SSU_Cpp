#include "Stdafx.h"
#include "Manager.h"

//
using namespace std;

//
int main() {
	//auto manager = new Week4Manager();
	//auto manager = new Week6Manager();
	auto manager = new Week7Manager();

	manager->Main();

	delete manager;

	return 1;
}
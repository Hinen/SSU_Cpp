#include "Stdafx.h"
#include "Manager.h"

//
using namespace std;

//
int main() {
	//auto manager = new Week4Manager();
	//auto manager = new Week6Manager();
	//auto manager = new Week7Manager();
	//auto manager = new Week8Manager();
	//auto manager = new Week10Manager();
	//auto manager = new Week11Manager();
	auto manager = new Week13Manager();

	manager->Main();

	delete manager;

	return 1;
}
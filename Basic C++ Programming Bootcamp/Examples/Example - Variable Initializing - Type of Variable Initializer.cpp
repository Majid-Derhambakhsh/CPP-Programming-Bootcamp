
#include <iostream>

using namespace std;

int main()
{

	/*
	* 
	* Type of Variable Initializer
	* 
	*/
	
	int copyInitVar = 10; // Copy initializer
	
	int constructorInitVar1(20); // Constructor initializer
	int constructorInitVar2 = (30, 35, 40, 92); // Constructor initializer

	int uniformInitVar1{23}; // Uniform initializer
	int uniformInitVar2 = {10}; // Uniform initializer
	//int f = { 0, 5, 20, 30 }; error on uniform initializer

	cout << copyInitVar;
	cout << constructorInitVar1;
	cout << constructorInitVar2;
	cout << uniformInitVar1;
	cout << uniformInitVar2;

}

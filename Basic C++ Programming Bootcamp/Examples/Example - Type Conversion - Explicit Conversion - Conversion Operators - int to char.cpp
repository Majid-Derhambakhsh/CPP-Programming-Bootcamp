
#include <iostream>

using namespace std;

int main()
{

	/*
	*
	* Explicit Type Conversion: Conversion Operator
	*
	*	* Method: static_cast<char>(variable)
	*	* int to char, remove <loss of data> warnings
	*
	*/

	int a = 70;

	char b = static_cast<char>(a);

	cout << a << endl;
	cout << b;

}

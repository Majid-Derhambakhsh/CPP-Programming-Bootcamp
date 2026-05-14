
#include <iostream>

using namespace std;

int main()
{

	/*
	*
	* Explicit Type Conversion: C-Style
	* 
	*	* Method: (int)variable
	*	* double to int, remove <loss of data> warnings
	*
	*/

	double a = 10.2325653;

	int b = (int)a;

	cout << a << endl;
	cout << b;

}


#include <iostream>

using namespace std;

int main()
{

	/*
	*
	* Explicit Type Conversion: Function-Style
	*
	*	* Method: (int)variable
	*	* double to int, remove <loss of data> warnings
	*
	*/

	float a = 10.23f;

	int b = int(a);

	cout << a << endl;
	cout << b;

}

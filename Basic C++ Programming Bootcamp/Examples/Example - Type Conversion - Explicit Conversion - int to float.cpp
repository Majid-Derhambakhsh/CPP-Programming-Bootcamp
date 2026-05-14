
#include <iostream>

using namespace std;

int main()
{

	/*
	*
	* Explicit Type Conversion: C-Style
	*	
	*	* Method: (float)variable
	*	* int to float, remove <loss of data> warnings
	*
	*/

	int a = 10;

	float b = (float)a;

	cout << a << endl;
	cout << b;

}
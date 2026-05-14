
#include <iostream>
#include <math.h>

using namespace std;

int main()
{

	/*
	* 
	* Calculate Size and Range of Data Type
	* 
	*/
	
	int a = 0;

	cout << "Size(B): " << sizeof(a) << endl;
	cout << "Size(b): " << (sizeof(a) * 8) << endl;

	long long int min = -pow(2, ((sizeof(a) * 8) - 1));
	long long int max = pow(2, ((sizeof(a) * 8) - 1)) - 1;

	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

}

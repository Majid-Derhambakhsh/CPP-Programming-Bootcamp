#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	
	float ax = 0;
	float bx = 0;
	float c = 0;

	// take input from the user
	cout << "Enter Ax Bx C: ";
	cin >> ax >> bx >> c;

	float d = pow(bx, 2) - (4 * ax * c);

	if (d >= 0) // Real
	{
		float a1 = ((-bx) + sqrt(d)) / (2 * ax);
		float a2 = ((-bx) - sqrt(d)) / (2 * ax);

		cout << "A1: " << a1 << "\tA2: " << a2 << endl;

	}
	else // Complex : Real + Im
	{
		float real = (-bx) / (2 * ax);
		float im = sqrt(-d) / (2 * ax);

		cout << "Complex: " << real << "+-" << im << endl;

	}

}
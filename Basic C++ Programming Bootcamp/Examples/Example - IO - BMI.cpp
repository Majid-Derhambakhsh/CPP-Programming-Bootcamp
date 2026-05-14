
#include <iostream>

using namespace std;

int main()
{

	/* مساحت دایره
	*
	*  area = 3.14 * r * r
	*
	*/

	const float PI = 3.14;
	float r = 0;

	cout << "Enter r: ";
	cin >> r;

	float area = PI * r * r;

	cout << "Area: " << area;

}


#include <iostream>

using namespace std;

int main()
{

	/* مساحت مستطیل
	*
	*  w : width
	*  l : length
	*  area = l * w
	*
	*/

	float width = 0;
	float length = 0;

	cout << "Enter length: ";
	cin >> length;

	cout << "Enter width: ";
	cin >> width;

	float area = length * width;

	cout << "Area: " << area;

}

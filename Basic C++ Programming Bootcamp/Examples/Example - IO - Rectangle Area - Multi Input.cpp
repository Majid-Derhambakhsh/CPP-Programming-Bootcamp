
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

	cout << "Enter length, width: ";
	cin >> length >> width;

	float area = length * width;

	cout << "Length: " << length << '\n';
	cout << "Width: " << width << '\n';
	cout << "Area: " << area;

}

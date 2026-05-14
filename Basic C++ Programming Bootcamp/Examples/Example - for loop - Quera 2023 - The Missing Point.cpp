
#include <iostream>

using namespace std;

int main()
{

	/*
	*
	* Check Number Sign
	*
	*/

	int x = 0, y = 0, z = 0;
	int firstX = 0, firstY = 0, firstZ = 0;
	int secondX = 0, secondY = 0, secondZ = 0;
	int x1counter = 1, y1counter = 1, z1counter = 1;

	/* Get First Point */
	cin >> x >> y >> z;
	firstX = x;
	firstY = y;
	firstZ = z;

	/* Get other Points */
	for (int i = 0; i < 6; i++)
	{
		cin >> x >> y >> z;

		x == firstX ? x1counter++ : secondX = x;
		y == firstY ? y1counter++ : secondY = y;
		z == firstZ ? z1counter++ : secondZ = z;
	}

	/* Find Last Point */
	x1counter < 4 ? x = firstX : x = secondX;
	y1counter < 4 ? y = firstY : y = secondY;
	z1counter < 4 ? z = firstZ : z = secondZ;

	cout << x << y << z << endl;
	
	return 0;

}

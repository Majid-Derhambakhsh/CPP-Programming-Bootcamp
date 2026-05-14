#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{

	union
	{

		int x;
		int y;

	}data1;

	data1.x = 10;
	data1.y = 5;

	cout << "X : " << data1.x << endl;
	cout << "Y : " << data1.y << endl;
	cout << "Size of data1 : " << sizeof(data1) << endl;

}

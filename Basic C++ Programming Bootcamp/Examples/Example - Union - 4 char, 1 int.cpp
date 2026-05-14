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

		char a1;
		char a2;
		char a3;
		char a4;
		int y;

	}data1;
	
	data1.y = (65 << 24) |(68 << 16) |(65 << 8) |(65 << 0);

	cout << "A1 : " << data1.a1 << endl;
	cout << "A2 : " << data1.a2 << endl;
	cout << "A3 : " << data1.a3 << endl;
	cout << "A4 : " << data1.a4 << endl;
	cout << "Y : " << data1.y << endl;
	cout << "Size of data1 : " << sizeof(data1) << endl;

}

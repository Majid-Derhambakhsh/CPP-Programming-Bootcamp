#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{

	struct Reg_T
	{

		unsigned int x : 3; // Up to 7 Decimal (3 bit)
		unsigned int y : 4; // Up to 15 Decimal (4 bit)

	};
	
	Reg_T Reg1;

	Reg1.x = 7;
	Reg1.y = 15;

	cout << "X : " << Reg1.x << endl;
	cout << "Y : " << Reg1.y << endl;
	cout << "Size of Reg : " << sizeof(Reg1) << " (Byte)" << endl;

}

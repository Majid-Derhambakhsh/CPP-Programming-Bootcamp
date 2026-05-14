#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{

	enum Color_T
	{

		Black,
		White,
		Red,
		Blue,
		Yellow,
		Brown,
		Purple,

	};

	Color_T CarColor;

	CarColor = Yellow;

	if (CarColor == Red)
	{
		cout << "Color is Red!" << endl;
	}
	else
	{
		cout << "Color not found!, Color Code: " << CarColor << endl;
	}

}

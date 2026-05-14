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

		BLACK,
		WHITE,
		RED,
		BLUE,
		YELLOW,
		BROWN,
		PURPLE,

	};

	struct Car_T
	{

		string Name;
		Color_T Color;
		int TopSpeed;
		int Speed;

	};

	Car_T CarList[3];

	CarList[0].Color = BLUE;
	CarList[0].Name  = "Pride - Sipa 131";
	CarList[0].TopSpeed = 160;

	CarList[1].Color = BLACK;
	CarList[1].Name = "Peugeot 405";
	CarList[1].TopSpeed = 200;

	CarList[2].Color = RED;
	CarList[2].Name = "BMW Z4";
	CarList[2].TopSpeed = 250;


	int userColor = BLACK;

	cout << "Enter Car Color: ";
	cin >> userColor;

	for (size_t i = 0; i < 3; i++)
	{
		if (CarList[i].Color == userColor)
		{
			cout << "We found this car: " << CarList[i].Name << ", " << CarList[i].Color << ", " << CarList[i].TopSpeed << endl;
		}
	}

}

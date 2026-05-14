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

	Car_T Pride;
	Car_T Peugeot;
	Car_T BMW;

	Pride.Color = BLUE;
	Pride.Name  = "Pride - Sipa 131";
	Pride.TopSpeed = 160;

	Peugeot.Color = BLACK;
	Peugeot.Name = "Peugeot 405";
	Peugeot.TopSpeed = 200;

	BMW.Color = RED;
	BMW.Name = "BMW Z4";
	BMW.TopSpeed = 250;


	int userColor = BLACK;

	cout << "Enter Car Color: ";
	cin >> userColor;

	if (Pride.Color == userColor)
	{
		cout << "We found this car: " << Pride.Name << ", " << Pride.Color << ", " << Pride.TopSpeed << endl;
	}

	if (Peugeot.Color == userColor)
	{
		cout << "We found this car: " << Peugeot.Name << ", " << Peugeot.Color << ", " << Peugeot.TopSpeed << endl;
	}

	if (BMW.Color == userColor)
	{
		cout << "We found this car: " << BMW.Name << ", " << BMW.Color << ", " << BMW.TopSpeed << endl;
	}

}

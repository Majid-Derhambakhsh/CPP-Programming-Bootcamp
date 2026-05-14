#include <iostream>

using namespace std;

int main()
{

	/*
		Power: 
			a, b
			a * a * a * ..... * a
	*/
	
	int a = 0;
	int b = 0;
	int out = 1;

	// take input from the user
	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;
	
	for (int i = 0; i < b; i++)
	{
		out = out * a;
	}

	// display the pow
	cout << "Pow: " << out << endl;

}

#include <iostream>

using namespace std;

int main()
{

	/*
	*
	* Check Number Sign
	*
	*/

	int number = 0;

	cout << "Enter Number: ";
	cin >> number;

	if (number > 0)
	{
		cout << "Your number is possitive";
	}

	if (number == 0)
	{
		cout << "Your number is zero";
	}

	if (number < 0)
	{
		cout << "Your number is negative";
	}

}

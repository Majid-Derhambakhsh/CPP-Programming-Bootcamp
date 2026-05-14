#include <iostream>

using namespace std;

int main()
{

	int num1 = 0;
	int num2{ 0 };

	int g = 0;

	// Take num1, num2
	cout << "Enter Num1, Num2: ";
	cin >> num1 >> num2;

	// Swap num1 and num2
	if (num2 > num1)
	{
		int n = num1;
		num1 = num2;
		num2 = n;
	}

	for (int i = 1; i <= num1; i++)
	{
		if ((num1 % i == 0) && (num2 % i == 0))
		{
			g = i;
		}
	}

	// display the GCD
	cout << "G: " << g;

}
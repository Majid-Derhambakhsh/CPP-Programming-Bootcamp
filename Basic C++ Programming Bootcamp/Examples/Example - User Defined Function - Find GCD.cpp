#include <iostream>

using namespace std;

int GCD(int n1, int n2)
{

	int g = 0;

	// Swap n1 and n2
	if (n1 > n2)
	{
		int n = n1;
		n1 = n2;
		n2 = n;
	}

	for (int i = 1; i <= n1; i++)
	{
		if ((n1 % i == 0) && (n2 % i == 0))
		{
			g = i;
		}
	}

	return g;

}

int main()
{

	int num1 = 0;
	int num2{ 0 };

	// Take num1, num2
	cout << "Enter Num1, Num2: ";
	cin >> num1 >> num2;

	// display the GCD
	cout << "G: " << GCD(num1, num2);

}
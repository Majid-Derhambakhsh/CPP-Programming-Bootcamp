#include <iostream>

using namespace std;

int Factorial(int n)
{

	int factorial = 1;

	for (int i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}

	return factorial;

}

int main()
{
	
	/*
		Factorial:
			5! = 1 * 2 * 3 * 4 * 5 = 120
			
	*/

	int n = 0;

	// take input from the user
	cout << "Enter a positive integer: ";
	cin >> n;
	
	// display the factorial
	cout << "Factorial: " << Factorial(n) << endl;

	return 0;
}
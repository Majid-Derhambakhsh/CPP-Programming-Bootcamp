#include <iostream>

using namespace std;

int main()
{

	/*
		Factorial:
			5! = 1 * 2 * 3 * 4 * 5 = 120
			
	*/
	
	int n = 0;
	int factorial = 1;

	// take input from the user
	cout << "Enter a positive integer: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}
	
	// display the factorial
	cout << "Factorial of " << n << " = " << factorial;

}
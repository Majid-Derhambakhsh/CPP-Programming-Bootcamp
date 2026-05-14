#include <iostream>

using namespace std;

int main()
{

	/*
		Input: 5
		1 + 2 + 3 + 4 + 5
	*/
	
	int n = 0;
	int sum = 0;

	// take input from the user
	cout << "Enter n: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	// display the sum
	cout << "Sum: " << sum << endl;

}

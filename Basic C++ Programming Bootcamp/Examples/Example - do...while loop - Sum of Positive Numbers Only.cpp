#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	int sum{ 0 };

	do
	{

		// add all positive numbers
		sum = sum + number;
		// sum += number;

		// take input again if the number is positive
		cout << "Enter Number: ";
		cin >> number;

	}
	while (number >= 0);
	
	// display the sum
	cout << "Sum: " << sum;

}
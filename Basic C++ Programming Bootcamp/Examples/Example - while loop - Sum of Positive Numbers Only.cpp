#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int number = 0;
	int sum = 0;
	
	// take input from the user
	cout << "Enter Number: ";
	cin >> number;
	
	while (number >= 0)
	{
		// add all positive numbers
		sum += number;
		
		// take input again if the number is positive
		cout << "Enter Number: ";
		cin >> number;
	}
	
	// display the sum
	cout << "Sum: " << sum;
	
	return 0;
}

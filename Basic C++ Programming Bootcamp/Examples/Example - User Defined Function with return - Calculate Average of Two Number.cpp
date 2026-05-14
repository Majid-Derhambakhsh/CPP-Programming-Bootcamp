#include <iostream>

using namespace std;

// Function to Calculate Average of Two Number
int AVG(int s1, int s2)
{
	return ((s1 + s2) / 2);
}

int main()
{

	while (true)
	{
		// take input from the user
		int num1 = 0, num2 = 0;
		
		cout << "Enter Score 1: ";
		cin >> num1;
		
		cout << "Enter Score 2: ";
		cin >> num2;
		
		// Calculate Average of Two Number
		int x = AVG(num1, num2);
		
		// Display the message
		if (x < 10)
		{
			cout << "Failed" << endl;
		}
		else if (x >= 12)
		{
			cout << "Success" << endl;
		}
		else
		{
			cout << "-------" << endl;
		}
		
	}
	
}
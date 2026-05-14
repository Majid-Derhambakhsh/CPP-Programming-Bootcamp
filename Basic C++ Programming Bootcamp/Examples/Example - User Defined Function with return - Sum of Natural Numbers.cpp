#include <iostream>

using namespace std;

// Function to Calculate Sum of Natural Numbers
int SumOfN(int n)
{
	int a = 0;
	
	for (size_t i = 0; i <= n; i++)
	{
		a += i;
	}
	
	return a;

}

int main()
{
	while (true)
	{
		/*
			Input: 5
			1 + 2 + 3 + 4 + 5
		*/
		
		int num = 0;
		
		// take input from the user
		cout << "Enter N: ";
		cin >> num;
		
		// Calculate Sum of Natural Numbers
		int x = SumOfN(num);
		
		// display the sum
		cout << x << endl;
		//cout << SumOfN(num) << endl;
		
	}
	
}
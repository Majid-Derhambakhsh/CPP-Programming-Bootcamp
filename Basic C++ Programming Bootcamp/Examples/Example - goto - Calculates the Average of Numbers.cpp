#include <iostream>

using namespace std;

int main()
{
	float num, average, sum = 0.0f;
	int i = 0, n = 0;

	cout << "Number of inputs: ";
	cin >> n;

	for (i = 0; i <= n; i++)
	{

		cout << "Enter n" << i << ": ";
		cin >> num;

		if (num < 0.0f)
		{
			goto jump;
		}

		sum += num;

	}

	jump:
		average = sum / i;
		cout << "\nAverage = " << average;
	
	return 0;

}

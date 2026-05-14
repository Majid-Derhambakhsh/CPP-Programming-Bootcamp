#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{
	/* Define Arraye to Store Scores */
	float grade[5] = { 0 };
	
	/* Get input from User and Store in Array */
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Enter Score " << (i + 1) << ": ";
		cin >> grade[i];
	}

	/* Calculate Average of Scores */
	float avg = (grade[0] + grade[1] + grade[2] + grade[3] + grade[4]) / 5;
	cout << avg;

}

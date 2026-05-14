#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */

void printNumbers(int a[], int size)
{

	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << endl;
	}
	
}

/* ..... Main Code ..... */
int main()
{
	int score[] = { 0, 12, 20, 10, 15, 14 };

	printNumbers(score, sizeof(score) / 4);
}

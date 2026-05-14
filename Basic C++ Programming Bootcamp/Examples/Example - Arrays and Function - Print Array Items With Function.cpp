#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
void printNumbers(int a, int b)
{
	cout << a << endl;
	cout << b << endl;
}

/* ..... Main Code ..... */
int main()
{
	int score[] = { 0, 12, 20, 10, 15, 14 };

	for (size_t i = 0; i < 5; i += 2)
	{
		printNumbers(score[i + 0], score[i + 1]);
	}

}

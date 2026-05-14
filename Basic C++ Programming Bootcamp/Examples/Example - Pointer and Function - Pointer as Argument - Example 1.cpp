#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
void Sum(int *a, int *b)
{
	*a = *a + *b;
}

/* ..... Main Code ..... */
int main()
{

	int a1 = 10;
	int b1 = 15;

	Sum(&a1, &b1);

	cout << a1 << endl;
	cout << b1 << endl;

}

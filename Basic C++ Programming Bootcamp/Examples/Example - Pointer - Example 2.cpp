#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{

	int  a = 5;
	char b = 'Z';
	int c = 35;

	int *address1 = &a;
	char *address2 = &b;

	a = 10;
	b = 'V';

	address1 = &c;
	*address2 = 'G';

	*address1 = 100;

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;

}

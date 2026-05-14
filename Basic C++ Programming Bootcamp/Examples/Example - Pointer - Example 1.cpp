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

	int *address1 = &a;
	char *address2 = &b;

	cout << "A  Address: " << &a << endl;
	cout << "*A Address: " << address1 << endl;
	cout << "B  Address: " << &b << endl;
	cout << "*B Address: " << address2 << endl;

	printf_s("%x", address2);

}

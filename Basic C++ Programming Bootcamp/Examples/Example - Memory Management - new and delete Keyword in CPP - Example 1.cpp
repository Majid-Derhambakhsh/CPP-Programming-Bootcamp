#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */

/* ..... Main Code ..... */
int main()
{

	int *address = new int{10};

	*address = 15;
	*(address + 1) = 99;

	delete[] address;

	for (size_t i = 0; i < 10; i++)
	{
		cout << *address << endl;
		address++;
	}

}

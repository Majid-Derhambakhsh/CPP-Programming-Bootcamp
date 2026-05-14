#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{

	int Home = 10;

	int *ptr1 = &Home;
	int *ptr2 = ptr1;

	//cout << ptrToText << endl;

	printf_s("Home Address: %x, Home Value: %d\n", &Home, Home);
	printf_s("Address: %x, Value: %d\n", ptr2, *ptr2);
	
}

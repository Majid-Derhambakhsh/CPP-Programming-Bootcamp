#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{

	char Text[] = "Hello";

	char *ptrToText = Text;

	//cout << ptrToText << endl;

	printf_s("Address: %x, Value: %c\n", (ptrToText + 0), *(ptrToText + 0));
	printf_s("Address: %x, Value: %c\n", (ptrToText + 1), *(ptrToText + 1));
	printf_s("Address: %x, Value: %c\n", (ptrToText + 2), *(ptrToText + 2));
	printf_s("Address: %x, Value: %c\n", (ptrToText + 3), *(ptrToText + 3));
	printf_s("Address: %x, Value: %c\n", (ptrToText + 4), *(ptrToText + 4));
	
}

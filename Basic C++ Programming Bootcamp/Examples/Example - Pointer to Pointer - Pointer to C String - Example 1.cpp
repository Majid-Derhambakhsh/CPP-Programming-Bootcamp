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
	char *ptr = ptrToText;

	//cout << ptrToText << endl;

	printf_s("Address: %x, Value: %c\n", ptr, *ptr);
		
}

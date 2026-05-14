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

	printf_s("%c\n", *ptrToText);
	ptrToText += 4;
	printf_s("%c\n", *ptrToText);
	
}

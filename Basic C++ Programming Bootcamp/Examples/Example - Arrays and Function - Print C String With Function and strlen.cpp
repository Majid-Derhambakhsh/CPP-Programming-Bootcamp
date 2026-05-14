#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */

void printNumbers(char str[])
{

	for (size_t i = 0; i < strlen(str); i++)
	{
		cout << str[i];
	}
	
}

/* ..... Main Code ..... */
int main()
{
	char text[] = "Hello Programmer!";

	printNumbers(text);
}

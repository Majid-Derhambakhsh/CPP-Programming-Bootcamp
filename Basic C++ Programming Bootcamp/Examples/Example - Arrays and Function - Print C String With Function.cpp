#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */

void printNumbers(char str[])
{
	
	int i = 0;

	while (str[i] != 0)
	{
		cout << str[i];
		i++;
	}
	
}

/* ..... Main Code ..... */
int main()
{
	char text[] = "Hello Programmer!";

	printNumbers(text);
}

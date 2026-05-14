#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
char *AppendString(char *str1, char *str2)
{
	static char out[100] = { 0 };

	int counter = 0;

	while (*str1 != '\0')
	{
		out[counter] = *str1;
		str1++;
		counter++;
	}

	while (*str2 != '\0')
	{
		out[counter] = *str2;
		str2++;
		counter++;
	}

	return out;

}

/* ..... Main Code ..... */
int main()
{
	char msg1[] = "Hello ";
	char msg2[] = "programmer";

	cout << AppendString(msg1, msg2) << endl;

}

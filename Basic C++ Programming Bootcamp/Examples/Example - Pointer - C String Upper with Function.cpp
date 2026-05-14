#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
void Upper(char *str)
{
	while (*str != '\0')
	{

		if (*str >= 'a')
		{
			*str -= 32;
		}

		str++;
	}
}

/* ..... Main Code ..... */
int main()
{
	char msg[] = "Hello programmer";

	Upper(msg);

	cout << msg << endl;

}

#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{
	char names[][8] = { "Ali", 
		                "hossein"
	                  };

	for (size_t i = 0; i < 3; i++)
	{
		cout << names[0][i];
	}
	
}

#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{

	//char name1[] = "Ali";

	char names[][8] = { "Ali", 
		                "hossein"
	                  };
	
	int totalSize = sizeof(names); // Calculate Total Size of String in Byte
	int rowSize   = sizeof(names[0]); // Calculate Size of Row in Byte
	int numOfRow = totalSize / rowSize;

	cout << numOfRow << endl;
	
}

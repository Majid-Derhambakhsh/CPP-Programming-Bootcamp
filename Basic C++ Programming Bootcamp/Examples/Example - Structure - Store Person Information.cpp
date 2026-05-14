#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{

	struct 
	{

		char name[10];
		char last_name[10];
		int age;

	}Person1;
	
	Person1.name[0] = 'A';
	Person1.name[1] = 'l';
	Person1.name[2] = 'i';
	Person1.name[3] = '\0';
	Person1.age = 15;

	cout << Person1.name << endl;
	cout << Person1.age << endl;

}

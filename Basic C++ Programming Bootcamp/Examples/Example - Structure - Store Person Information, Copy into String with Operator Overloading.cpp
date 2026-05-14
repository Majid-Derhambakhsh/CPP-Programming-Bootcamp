#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{

	struct 
	{

		string name;
		string last_name;
		int age;

	}Person1;
	
	Person1.name = "Ali";
	Person1.last_name = "Hosseini";
	Person1.age = 15;

	cout << Person1.name << endl;
	cout << Person1.last_name << endl;
	cout << Person1.age << endl;

}

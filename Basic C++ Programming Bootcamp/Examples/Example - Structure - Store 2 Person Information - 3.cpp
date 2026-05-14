#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{

	struct Person_T
	{

		string name;
		string last_name;
		int age;

	};
	
	Person_T Person1;
	Person_T Person2;

	Person1.name = "Ali";
	Person1.last_name = "Hosseini";
	Person1.age = 15;

	Person2.name = "Amir";
	Person2.age = 20;

	cout << Person1.name << endl;
	cout << Person1.last_name << endl;
	cout << Person1.age << endl;

	cout << Person2.name << endl;
	cout << Person2.last_name << endl;
	cout << Person2.age << endl;

}

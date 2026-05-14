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

		char name[10];
		char last_name[10];
		int age;

	}Person1;
	
	char text[] = "Ali Hosseini";
	int counter = 0;

	for (char i : text)
	{
		Person1.name[counter] = i;
		counter++;
	}

	Person1.name[strlen(text)] = '\0';
	Person1.age = 15;

	cout << Person1.name << endl;
	cout << Person1.last_name << endl; // String was corp
	cout << Person1.age << endl;

}

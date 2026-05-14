#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{
	/* Define C String to Store Names */
	char name[5][50] = { 0 };

	/* Take Input and Store Names in C String */
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Enter Your Name: ";
		cin >> name[i];
	}

	/* Show C String Values */
	cout << "Hello " << name[0] << endl;
	cout << "Hello " << name[1] << endl;
	cout << "Hello " << name[2] << endl;
	cout << "Hello " << name[3] << endl;
	cout << "Hello " << name[4] << endl;
	
}

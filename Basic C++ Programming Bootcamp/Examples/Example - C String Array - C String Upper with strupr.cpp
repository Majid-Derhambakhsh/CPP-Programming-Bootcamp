#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{
	
	char text1[10] = "Ali";
	char name1[] = "Ali";

	//cout << strcmp(text1, name1) << endl;
	cout << _strupr(name1) << endl;

}

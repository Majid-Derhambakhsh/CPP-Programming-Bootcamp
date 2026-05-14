#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */

/* ..... Main Code ..... */
int main()
{ 

	char *buff = new char{100};

	char text1[] = "Hello";
	char text2[] = " Ali";

	strcpy(buff, text1);
	strcpy(&buff[5], text2);

	cout << buff << endl;

	delete[] buff;
	buff = nullptr;

}

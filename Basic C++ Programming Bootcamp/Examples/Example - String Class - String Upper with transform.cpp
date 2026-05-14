#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{
	string text2 = "Hosseinn";
	string name2 = "Hossein";

	transform(name2.begin(), name2.end(), name2.begin(), ::toupper);

	//cout << text2.compare(name2) << endl;
	cout << name2 << endl;
}

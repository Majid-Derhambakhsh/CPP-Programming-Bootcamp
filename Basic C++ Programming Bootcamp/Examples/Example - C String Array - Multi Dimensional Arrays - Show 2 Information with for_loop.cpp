#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{
	char name[2][8] = { "Ali", "Hossein" };
	char last_name[2][10] = { "Amiri", "Panahande" };
	int age[] = { 15, 20 };

	for (size_t i = 0; i < 2; i++)
	{
		cout << "Info " << i << " : " << name[i] << " " << last_name[i] << " , Age: " << age[i] << endl;
	}

}

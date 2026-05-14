#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{

	int arr[2][3] = {
		             {1, 2, 3},
					 {4, 5, 6},
	                };

	int *ptr = arr[1];
	int *ptr = &arr[1][2];
	
	printf_s("Address: %x, Value: %d\n", ptr, *ptr);
	
}

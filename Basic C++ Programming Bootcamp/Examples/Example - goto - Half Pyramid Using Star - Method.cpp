#include <iostream>

using namespace std;

int main()
{

	int i(0);
	int j = 0;

	printStart:
		cout << "* ";
		
		j++;

		if (j <= i)
		{
			goto printStart;
		}
		
	printEndLine:
		cout << endl;
		
		i += 1;
		j  = 0;

		if (i < 5)
		{
			goto printStart;
		}

}

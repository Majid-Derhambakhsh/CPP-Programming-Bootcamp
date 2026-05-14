#include <iostream>

using namespace std;

int main()
{
	
	bool status = false;

	for (size_t i = 0; i < 5; i++)
	{

		for (size_t j = 0; j < 5; j++)
		{

			cout << i << '\t'  << j << endl;
			
			if (j == 2)
			{
				status = true;
				break;
			}

		}
		
		if (status == true) break;

	}
	
}
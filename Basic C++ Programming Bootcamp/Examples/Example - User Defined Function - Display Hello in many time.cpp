#include <iostream>

using namespace std;

int i = 1;

void printHello()
{
	cout << "Hello World! : " << i << endl;
	i++;
}

int main()
{
	
	for (size_t i = 0; i < 100000; i++)
	{
		printHello();
	}
	
}

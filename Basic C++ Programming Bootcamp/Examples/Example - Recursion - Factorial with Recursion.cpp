#include <iostream>

using namespace std;

/* --------------------- Function --------------------- */
int Factorial(int x)
{

	for (size_t i = x - 1; i > 0; i--)
	{
		x *= i;
	}

	return x;

}

int Factorial2(int x)
{

	if (x > 1)
	{
		return x * Factorial2(x - 1);
	}
	else
	{
		return 1;
	}

}

/* ..... Main Code ..... */
int main()
{
	cout << Factorial2(5) << endl;
}

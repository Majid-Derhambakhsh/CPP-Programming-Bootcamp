#include <iostream>
using namespace std;

/* -------------------- Prototypes -------------------- */
int Add(int, int);
float Add(float, float);
double Add(double, double);

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{
	
    int n1 = 0;
    int n2 = 0;
    float n3 = 0;
    float n4 = 0;
	
    cout << "Enter N1:";
    cin >> n1;
	
    cout << "Enter N2:";
    cin >> n2;
	
    cout << "Sum: " << Add(n1, n2) << endl;
	
    cout << "Enter N1:";
    cin >> n3;
	
    cout << "Enter N2:";
    cin >> n4;
	
    cout << "Sum: " << Add(n3, n4) << endl;
	
}

/* ..................... */
int Add(int a, int b)
{
    return (a + b);
}

// Overload 1
float Add(float a, float b)
{
    return (a + b);
}

// Overload 2
double Add(double a, double b)
{
    return (a + b);
}

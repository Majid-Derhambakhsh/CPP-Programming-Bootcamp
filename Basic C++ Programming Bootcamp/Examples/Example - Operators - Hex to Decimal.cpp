
#include <iostream>

using namespace std;

int main()
{

	/*
	* 
	* Hex to Decimal
	* 
	*/
	
	char hex = 0;
	int dec = 0;

	cout << "Hex: ";
	cin >> hex;

	(hex >= 65) ? dec = hex - 55 : dec = hex - 48;

	cout << "Decimal: " << dec;

}


#include <iostream>

using namespace std;

int main()
{

	/*
	* 
	* Sum of 2 Product
	* 
	*/
	
	float product1_price = 0;
	float product1_numberOf = 0;

	float product2_price = 0;
	float product2_numberOf = 0;

	float basketSum = 0;

	// Product 1
	cout << "Price of Porduct 1: ";
	cin >> product1_price;

	cout << "Number of Porduct 1: ";
	cin >> product1_numberOf;

	// Product 2
	cout << "Price of Porduct 2: ";
	cin >> product2_price;

	cout << "Number of Porduct 2: ";
	cin >> product2_numberOf;

	// Basket Sum
	basketSum = (product1_price * product1_numberOf) + (product2_price * product2_numberOf);
	
	cout << "Basket Sum: " << basketSum;

}

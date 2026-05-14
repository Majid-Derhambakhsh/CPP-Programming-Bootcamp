#include <iostream>

using namespace std; // Use the standard namespace

/* --------------------- Function --------------------- */
void ShowMessage(bool isHello, int Quantity) // Function to display "Hello" or "Goodbye" based on the isHello flag and the specified quantity
{
	// Loop to display the message for the number of times specified by Quantity
	for (size_t i = 0; i < Quantity; i++)
	{
		// Conditional to check if we should display "Hello" or "Goodbye"
		if (isHello == true)
		{
			cout << "Hello" << endl;
		}
		else
		{
			cout << "Goodbye" << endl;
		}
	}
}

/* ..... Main Code ..... */
int main() // Main function of the program
{

	bool type = 0; // Variable to store the user's choice for message type
	int showQuantity = 0; // Variable to store the number of times to display the message
	
	// Infinite loop to continuously run the program until manually stopped
	while (true)
	{
		// Prompt the user to choose between "Hello" or "Goodbye"
		cout << "[1] Hello or [0] Goodbye?";
		cin >> type;
		
		// Ask the user for the number of times to display the message
		cout << "Enter Quantity: ";
		cin >> showQuantity;
		
		// Call the function to display the message with the current parameters
		ShowMessage(type, showQuantity);
		
	}
	
}
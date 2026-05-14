#include <iostream>

using namespace std; // Use the standard namespace

int showQuantity = 2; // Variable to store the number of times to display the message

bool showHello = true; // Boolean flag to determine whether to show "Hello" or "Goodbye"

/* --------------------- Function --------------------- */
void ShowHello() // Function to display "Hello" or "Goodbye" based on the boolean flag
{
	// Loop to display the message for the number of times specified by showQuantity
	for (size_t i = 0; i < showQuantity; i++)
	{
		// Conditional to check if we should display "Hello" or "Goodbye"
		if (showHello == true)
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
	
	// Infinite loop to continuously run the program until manually stopped
	while (true)
	{
		// Prompt the user to choose between "Hello" or "Goodbye"
		cout << "[1] Hello or [0] Goodbye?";
		cin >> showHello;
		
		// Ask the user for the number of times to display the message
		cout << "Enter Quantity: ";
		cin >> showQuantity;
		
		// Call the function to display the message
		ShowHello();
		
	}
	
}

#include <iostream>

using namespace std;

int main()
{

	/*
	*
	* Vowel-Consonant
	*
	*/

	char myChar = 0;

	/* Take Character from USER */
	cout << "Enter character to check: ";
	cin >> myChar;

	/* Check the character type */
	/*
	* islower: is Lower Case
	* isupper: is Upper Case
	* tolower: Change to Lower Case
	* toupper: Change to Upper Case
	* 
	* isalpha: Alphabet
	* isalnum: Alphabet and Numbers
	* isascii: ASCII
	*/

	if (isalpha(myChar))
	{

		if (isupper(myChar))
		{
			myChar = tolower(myChar);
		}

		if (myChar == 'u' || myChar == 'a' || myChar == 'o' || myChar == 'e')
		{
			cout << "Your character is vowel (Sedadaar)";
		}
		else
		{
			cout << "Your Character is consonantel (Biseda)";
		}

	}
	else
	{
		cout << "Error: You Enter a Number!";
	}

}

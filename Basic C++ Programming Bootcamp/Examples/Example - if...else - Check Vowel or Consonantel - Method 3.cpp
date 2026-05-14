
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
	* islower
	* isupper
	* tolower
	* toupper
	*/
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

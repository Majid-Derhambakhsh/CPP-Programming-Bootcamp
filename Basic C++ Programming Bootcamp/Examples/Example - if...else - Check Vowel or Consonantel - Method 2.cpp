
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
	if (myChar >= 'a')
	{
		myChar = myChar - 32; // myChar -= 32;
	}

	if (myChar == 'U' || myChar == 'A' || myChar == 'O' || myChar == 'E')
	{
		cout << "Your character is vowel (Sedadaar)";
	}
	else
	{
		cout << "Your Character is consonantel (Biseda)";
	}


}

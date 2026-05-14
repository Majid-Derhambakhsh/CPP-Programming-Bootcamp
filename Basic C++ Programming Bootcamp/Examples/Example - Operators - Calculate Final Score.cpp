
#include <iostream>

using namespace std;

int main()
{

	/*
	*
	* Calculate Final Score
	*
	*	* Formula: (score1 + score2) / 2
	*
	* Example:
	* 
	*	* FinalScore = (10 + 18) / 2 = 14
	*
	*/

	float english = 0;
	float mathematic = 0;

	cout << "Enter english score: ";
	cin >> english;

	cout << "Enter mathematic score: ";
	cin >> mathematic;

	float finalScore = (english + mathematic) / 2;

	cout << "Your status: ";
	cout << ((finalScore >= 10) ? "Ghabool Shodi!" : "Mardood Shodi!");
	cout << endl;

	cout << "Your final score: " << finalScore;

}

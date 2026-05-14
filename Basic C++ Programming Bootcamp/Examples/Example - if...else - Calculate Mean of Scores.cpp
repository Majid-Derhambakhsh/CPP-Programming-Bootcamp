
#include <iostream>

using namespace std;

int main()
{

	/*
	* 
	* Calculate Mean of Scores
	* 
	*/
	
	float course1 = 0;
	float course2(0);
	float finalScore{0};

	const int SCORE_SCALE = 20;

	/* Get Course Score from User */
	cout << "Enter Course 1 Score: ";
	cin >> course1;

	cout << "Enter Course 2 Score: ";
	cin >> course2;

	/* Calculate Final Score */
	finalScore = (course1 + course2) / 2;

	/* Convert Score to Grade */
	if (finalScore >= (SCORE_SCALE / 2)) // 50%
	{
		cout << "Ghabool Shodid!" << endl;
	}
	else
	{
		cout << "Mardood Shodid!" << endl;
	}

}

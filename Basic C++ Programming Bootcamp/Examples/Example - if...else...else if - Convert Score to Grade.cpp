
#include <iostream>

using namespace std;

int main()
{

	/*
	*
	* Convert Score to Grade
	*
	*/

	float course1 = 0;
	float course2(0);
	float finalScore{ 0 };

	const int SCORE_SCALE = 20;

	/* Get Course Score from User */
	cout << "Enter Course 1 Score: ";
	cin >> course1;
	
	if (course1 > SCORE_SCALE)
	{
		cout << "Re-Enter Course 1 Score: ";
		cin >> course1;
	}

	cout << "Enter Course 2 Score: ";
	cin >> course2;

	if (course2 > SCORE_SCALE)
	{
		cout << "Re-Enter Course 2Score: ";
		cin >> course2;
	}

	/* Calculate Final Score */
	finalScore = (course1 + course2) / 2;

	/* Convert Score to Grade */
	/*
	* Two Way to Convert:
	*	First Way: SCORE_SCALE * 0.9
	*	Second Way: (SCORE_SCALE / 100) * 90
	*/
	if (finalScore >= (SCORE_SCALE * 0.9))
	{
		cout << "Your Grade: A" << endl;
	}
	else if (finalScore >= (SCORE_SCALE * 0.75))
	{
		cout << "Your Grade: B" << endl;
	}
	else if (finalScore >= (SCORE_SCALE * 0.65))
	{
		cout << "Your Grade: C" << endl;
	}
	else
	{
		cout << "Your Grade: Out of Range" << endl;
	}

}

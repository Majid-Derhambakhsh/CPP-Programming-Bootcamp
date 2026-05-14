
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
	float finalScore{0};

	const int SCORE_SCALE = 20;

	bool gradeOK = false;

	/* Get Course Score from User */
	cout << "Enter Course 1 Score: ";
	cin >> course1;

	cout << "Enter Course 2 Score: ";
	cin >> course2;

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
		gradeOK = true;
	}

	if ((finalScore >= ((SCORE_SCALE / 100.0) * 75)) && (gradeOK == false))
	{
		cout << "Your Grade: B" << endl;
		gradeOK = true;
	}

	if ((finalScore >= (SCORE_SCALE * 0.65)) && (gradeOK == false))
	{
		cout << "Your Grade: C" << endl;
	}

}

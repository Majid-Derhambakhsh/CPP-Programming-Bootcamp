
#include <iostream>

using namespace std;

int main()
{

	/*
	*
	* Calculate the Days of Life With if Statement
	*
	*/

	unsigned int thisYear = 0;
	unsigned int thisMonth = 0;
	unsigned int thisDay = 0;

	unsigned int birthYear = 0;
	unsigned int birthMonth = 0;
	unsigned int birthDay = 0;

	unsigned int Year = 0;
	unsigned int Month = 0;
	unsigned int Day = 0;
	unsigned int totalDay = 0;
	unsigned int totalHour = 0;

	// Give Current Date
	cout << "-------- Enter Current Date --------" << endl;
	cout << "Enter Year: ";
	cin >> thisYear;

	cout << "Enter Month: ";
	cin >> thisMonth;

	cout << "Enter Day: ";
	cin >> thisDay;

	// Give Birth Date
	cout << "-------- Enter Birth Date --------" << endl;
	cout << "Enter Year: ";
	cin >> birthYear;

	cout << "Enter Month: ";
	cin >> birthMonth;

	cout << "Enter Day: ";
	cin >> birthDay;


	/*
	* Calculate Year:
	*  1: BirthMonth < ThisMonth --> Year = ThisYear - BirthYear
	*  2: BirthMonth > ThisMonth --> Year = (ThisYear - BirthYear) - 1
	*/
	if (birthMonth < thisMonth)
	{
		Year = (thisYear - birthYear);
	}

	if (birthMonth >= thisMonth)
	{
		Year = (thisYear - birthYear) - 1;
	}


	/*
	* Calculate Month:
	*  1: BirthMonth < ThisMonth --> Month = ThisMonth - BirthMonth
	*  2: BirthMonth > ThisMonth --> Month = 12 - (BirthMonth - ThisMonth)
	*/
	if (birthMonth < thisMonth)
	{
		Month = thisMonth - birthMonth;
	}

	if (birthMonth >= thisMonth)
	{
		Month = 12 - (birthMonth - thisMonth);
	}

	if (Month == 12)
	{
		Month = 0;
		Year++;
	}

	/*
	* Calculate Day:
	*  1: BirthMonth < ThisMonth --> Month = ThisMonth - BirthMonth
	*  2: BirthMonth > ThisMonth --> Month = 12 - (BirthMonth - ThisMonth)
	*/
	if (birthDay < thisDay)
	{
		Day = thisDay - birthDay;
	}

	if (birthDay >= thisDay)
	{
		Day = (thisDay + 30) - birthDay;
	}

	if (Day == 30)
	{
		Day = 0;
		Month++;
	}

	/*
	* Calculate Total Day:
	*  (Year * 365) + (Month * 30) + Day
	*/
	totalDay = (Year * 365) + (Month * 30) + Day;

	/*
	* Calculate Total Hour:
	*  totalDay * 24
	*/
	totalHour = totalDay * 24;

	cout << "Your Age: " << Year << " Year and " << Month << " Month and " << Day << " Day" << endl;
	cout << "Your Alive: " << totalDay << " Day" << endl;
	cout << "Your Alive: " << totalHour << " Hour" << endl;

}


#include <iostream>

using namespace std;

int main()
{

	/*
	* 
	* Total Seconds of Time
	* 
	*/
	
	int hour = 0;
	int minute = 0;
	int second = 0;

	int totalSeconds = 0;

	cout << "Hour: ";
	cin >> hour;

	cout << "Minute: ";
	cin >> minute;

	cout << "Second: ";
	cin >> second;

	totalSeconds = (hour * 3600) + (minute * 60) + second;

	cout << "Converted Time: " << totalSeconds;

}

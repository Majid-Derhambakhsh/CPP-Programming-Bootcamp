
#include <iostream>

using namespace std;

int main()
{

	/*
	*
	* Convert millisecond to HH:MM:SS
	*
	*	* 1 Second: 1000ms
	*	* 1 Minute: 60s
	*	* 1 Hour  : 60m
	*
	* Example:
	*	* 60000ms  -> 00:01:00
	*	* 125000ms -> 00:02:05
	*
	*
	*/

	unsigned int millisecond = 31564651;
	cout << "Enter time (in ms): ";
	cin >> millisecond;

	unsigned int second = millisecond / 1000;
	unsigned int minute = second / 60;
	unsigned int hour = minute / 60;

	second -= minute * 60;
	minute -= hour * 60;

	cout << "Converted time is:" << endl;
	cout << hour << ':' << minute << ':' << second << endl;

}

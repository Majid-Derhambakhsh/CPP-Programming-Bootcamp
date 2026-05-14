#include <iostream>

using namespace std;

#define NO_COMPUTERS_MAX 32 

void TableManagement(int num_of_computer, int num_of_team)
{

	unsigned int computerStatus = 0;
	
	for (int i = 0; i < num_of_team; i++)
	{
		int numOfMembers = 0;
		int startPos = 0;

		cout << "Enter StartPos, NumOfMembers: ";
		cin >> startPos >> numOfMembers;

		if ((num_of_computer - startPos + 1) < numOfMembers)
		{
			cout << "No\n";
			continue;
		}
		
		for (int i = 0; i < numOfMembers; i++)
		{

			computerStatus = computerStatus + (1 << (NO_COMPUTERS_MAX - startPos));
			// computerStatus = computerStatus + (1 << (sizeof(computerStatus) * 8 - startPos));
			startPos++;

		}

		for (int i = 0; i < num_of_computer; i++)
		{
			cout << ((computerStatus >> ((NO_COMPUTERS_MAX - 1) - i)) & 1);
		}

		cout << endl;

	}

}

int main()
{

	int numOfComputer = 0; // N.O Computer
	int numOfTeam = 0; // N.O Groups
	
	cout << "Enter numOfComputer, numOfTeam: ";
	cin >> numOfComputer >> numOfTeam;

	TableManagement(numOfComputer, numOfTeam);

}
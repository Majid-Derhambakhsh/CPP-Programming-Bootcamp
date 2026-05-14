#include <iostream>

using namespace std;

void CheckUser(int User, int Pass)
{
	
	static int opCounter1 = 0;
	static int opCounter2 = 0;

	if (User == 1) // User 1
	{
		// Change Password
		opCounter1++;

		if (opCounter1 == 2)
		{
			cout << "User 1, System Locked!" << endl;
		}

	}
	else // User 2
	{
		// Change Password
		opCounter2++;

		if (opCounter2 == 2)
		{
			cout << "User 2, System Locked!" << endl;
		}

	}

}


int main()
{
	
	while (true)
	{

		int user = 0;
		int pass = 0;

		cout << "Enter User, Password: ";
		cin >> user >> pass;

		CheckUser(user, pass);

	}
}

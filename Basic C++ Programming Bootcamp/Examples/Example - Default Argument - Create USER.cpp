#include <iostream>
using namespace std;

/* --------------------- Variable --------------------- */
int user1 = NULL;
int user2 = NULL;
int user3 = NULL;
int user4 = NULL;
int user5 = NULL;

int pass1 = NULL;
int pass2 = NULL;
int pass3 = NULL;
int pass4 = NULL;
int pass5 = NULL;

int userIndex = 1;

/* -------------------- Prototype --------------------- */
void CreateUser(int User, int Pass = 1234);

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{
	
    int user = 0;
    int pass = 0;
    bool changePass = false;
    bool questionStatus = false;
	
    cout << "Enter Username:";
    cin >> user;
	
    CreateUser(user);
	
    cout << "Do you want to change password? ";
    cin >> changePass;
	
    if (changePass == true)
    {
        cout << "Enter Password: ";
        cin >> pass;
		
        userIndex--;
        CreateUser(user, pass);
    }
	
    cout << "Do you want to show all user's? ";
    cin >> questionStatus;
	
    if (questionStatus == true)
    {
		
    }

}

/* ..................... */
void CreateUser(int User, int Pass)
{
    
    switch (userIndex)
    {
        case 1:
            user1 = User;
            pass1 = Pass;
        break;
        case 2:
            user2 = User;
            pass2 = Pass;
        break;
        case 3:
            user3 = User;
            pass3 = Pass;
        break;
        case 4:
            user4 = User;
            pass4 = Pass;
        break;
        case 5:
            user5 = User;
            pass5 = Pass;
        break;

        default:
        break;
    }
	
    cout << "Username: " << User << endl;
    cout << "Password: " << Pass << endl;
	
    userIndex++;

}

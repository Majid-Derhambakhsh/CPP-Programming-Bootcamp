#include <iostream>

#include "xogame.h"

using namespace std;

/* --------------------- Function --------------------- */
/* ..... Main Code ..... */
int main()
{
    ShowTable();
	
    while (true)
    {
        int pos = 0;
		
        bool status = true;
		
        do
        {
            cout << "Gamer1, Enter position: ";
            cin >> pos;
			
            status = MarkPos(pos, GAMER1_MARKER);
        } while (status == false && nullPos > 0);
		
        do
        {
            cout << "Gamer2, Enter position: ";
            cin >> pos;
			
            status = MarkPos(pos, GAMER2_MARKER);
        } while (status == false && nullPos > 0);
		
        ShowTable();
		
        if (nullPos == 0)
        {
			
            if (CheckTable(GAMER1_MARKER) == CheckTable(GAMER2_MARKER))
            {
                cout << "Gamer1 == Gamer2";
                break;
            }
			
        }
        else if (CheckTable(GAMER1_MARKER))
        {
            cout << "Gamer1, winer";
            break;
        }
        else if (CheckTable(GAMER2_MARKER))
        {
            cout << "Gamer2, winer";
            break;
        }
		
    }
}

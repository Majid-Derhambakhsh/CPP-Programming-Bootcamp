#include <iostream>
using namespace std;

/* ---------------------- Define ---------------------- */
#define GAMER1_MARKER 'X'
#define GAMER2_MARKER 'O'

/* --------------------- Variable --------------------- */
char pos1 = '1', pos2 = '2', pos3 = '3';
char pos4 = '4', pos5 = '5', pos6 = '6';
char pos7 = '7', pos8 = '8', pos9 = '9';

int nullPos = 9;

/* -------------------- Prototype --------------------- */
void ShowTable();
bool CheckTable(char GamerMarker);
bool MarkPos(int Pos, char Marker);

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

/* ..... Manage XO Table ..... */
void ShowTable()
{
    cout << "  " << pos1 << " | " << pos2 << " | " << pos3 << endl;
    cout << "  " << "---------" << endl;
    cout << "  " << pos4 << " | " << pos5 << " | " << pos6 << endl;
    cout << "  " << "---------" << endl;
    cout << "  " << pos7 << " | " << pos8 << " | " << pos9 << endl;
}

bool CheckTable(char GamerMarker)
{
    if ((pos1 == GamerMarker && pos2 == GamerMarker && pos3 == GamerMarker) ||
        (pos4 == GamerMarker && pos5 == GamerMarker && pos6 == GamerMarker) ||
        (pos7 == GamerMarker && pos8 == GamerMarker && pos9 == GamerMarker) ||
        (pos1 == GamerMarker && pos5 == GamerMarker && pos9 == GamerMarker) ||
        (pos3 == GamerMarker && pos5 == GamerMarker && pos7 == GamerMarker) ||
        (pos1 == GamerMarker && pos4 == GamerMarker && pos7 == GamerMarker) ||
        (pos2 == GamerMarker && pos5 == GamerMarker && pos8 == GamerMarker) ||
        (pos3 == GamerMarker && pos6 == GamerMarker && pos9 == GamerMarker))
    {
        return true;
    }

    return false;
}

bool MarkPos(int Pos, char Marker)
{

    switch (Pos)
    {
        case 1:
        {
            if (pos1 == '1')
            {
                pos1 = Marker;
                nullPos--;
                return true;
            }
        }
        break;
        case 2:
        {
            if (pos2 == '2')
            {
                pos2 = Marker;
                nullPos--;
                return true;
            }
        }
        break;
        case 3:
        {
            if (pos3 == '3')
            {
                pos3 = Marker;
                nullPos--;
                return true;
            }
        }
        break;
        case 4:
        {
            if (pos4 == '4')
            {
                pos4 = Marker;
                nullPos--;
                return true;
            }
        }
        break;
        case 5:
        {
            if (pos5 == '5')
            {
                pos5 = Marker;
                nullPos--;
                return true;
            }
        }
        break;
        case 6:
        {
            if (pos6 == '6')
            {
                pos6 = Marker;
                nullPos--;
                return true;
            }
        }
        break;
        case 7:
        {
            if (pos7 == '7')
            {
                pos7 = Marker;
                nullPos--;
                return true;
            }
        }
        break;
        case 8:
        {
            if (pos8 == '8')
            {
                pos8 = Marker;
                nullPos--;
                return true;
            }
        }
        break;
        case 9:
        {
            if (pos9 == '9')
            {
                pos9 = Marker;
                nullPos--;
                return true;
            }
        }
        break;
        default:break;
    }

    return false;

}

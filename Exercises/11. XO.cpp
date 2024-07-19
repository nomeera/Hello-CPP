#include <iostream>

using namespace std;

bool XO_board(char cellnum, char xo[3][3], char isX)
{

    // check validation
    char check = '1';
    bool valid = true;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            if (check == cellnum)      // only check target cell
                if (xo[i][j] == check) // check if cell contain XO char or not
                    valid = true;
                else
                    valid = false;
            check++;
        }

    
    if (valid)
    {
        cout << "***XO Game***\n";
        // draw raw
        for (int i = 0; i < 7; i++)
        {
            // draw columns
            if (!(i % 2)) // odd draw ----
                for (int j = 0; j < 12; j++)
                    cout << "-";

            else // even    draw |X||1||O|
            {

                for (int j = 0; j < 3; j++)
                {
                    if (xo[i / 2][j] == cellnum)
                        xo[i / 2][j] = isX;
                    // rflag = false;

                    cout << "| " << xo[i / 2][j] << " ";
                }
                cout << "|";
            }
            cout << "\n";
        }
        cout << endl;

        return true;
    }
    else
        return false;
}

char check_winner(char xo[3][3])
{
    // check horizontally
    for (int i = 0; i < 3; i++)
        if (xo[i][0] == xo[i][1] && xo[i][1] == xo[i][2])
            return xo[i][0];

    // check vertically
    for (int i = 0; i < 3; i++)
        if (xo[0][i] == xo[1][i] && xo[1][i] == xo[2][i])
            return xo[0][i];

    // check diagonal
    if (xo[0][0] == xo[1][1] && xo[1][1] == xo[2][2])
        return xo[1][1];
    if (xo[2][0] == xo[1][1] && xo[1][1] == xo[0][2])
        return xo[1][1];
    return ' ';
}

int main()
{

    // ----------XO Storage----------
    char cell_num = ' ';
    char isX = ' ';
    char xo[3][3];
    char cell = 49;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            xo[i][j] = cell++;
    // ------------------------------

    bool XO_flag = true;
    int iterations = 0;
    bool check = true;
    do
    {
        // print XO Board
        check = XO_board(cell_num, xo, isX);

        // game process
        if (check == true && iterations < 9)
        {
            // check winner
            if (check_winner(xo) == 'X')
            {
                cout << "X_Player won ^_^\n";
                cout << "Game Over...\n"
                     << endl;
                break;
            }
            else if (check_winner(xo) == 'O')
            {
                cout << "O_Player won ^_^\n";
                cout << "Game Over...\n"
                     << endl;
                break;
            }

            // User Input XO, cell_num, isX
            if (XO_flag)
            {
                cout << "X_Player, Choose cell: ";
                isX = 'X';
                XO_flag = false;
            }
            else
            {
                cout << "O_Player, Choose cell: ";
                XO_flag = true;
                isX = 'O';
            }
            cin >> cell_num;
            if (!(cell_num > 48 && cell_num < 58))
            {
                cout << "Invalid Input, Please choose cell.";
                cin >> cell_num;
            }

            cout << "\n";
            iterations++;
        }
        else if (iterations == 9)
        {
            cout << "The two players tied\n";
            cout << "Game Over...\n"
                 << endl;
            break;
        }
        else
        {
            cout << "non-empty cell, Please choose cell.";
            cin >> cell_num;
        }

    } while (iterations < 9);

    return 0;
}
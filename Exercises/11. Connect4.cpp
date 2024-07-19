#include <iostream>

using namespace std;

void board(char connect4[6][7])
{

    cout << " *********connect4*********\n";
    cout << "  0   1   2   3   4   5   6  \n";
    for (int i = 1; i < 13; i++) // draw raws
    {
        if (!(i % 2))                    // draw ------
            for (int j = 0; j < 28; j++) // draw columns
                cout << "-";
        else // draw connect4 value
        {
            for (int j = 0; j < 7; j++)
                cout << "| " << connect4[i / 2][j] << " "; // draw columns
            cout << "|";
        }

        cout << "\n";
    }
}

char check_winner(char connect4[6][7])
{
    // Check horizontally
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++) // Change from 3 to 4 to avoid accessing out of bounds
        {
            if (connect4[i][j] == connect4[i][j + 1] &&
                connect4[i][j + 1] == connect4[i][j + 2] &&
                connect4[i][j + 2] == connect4[i][j + 3] &&
                connect4[i][j] != ' ')
                return connect4[i][j]; // Horizontal win
        }
    }

    // Check vertically
    for (int i = 3; i >= 0; i--)
    {
        for (int j = 0; j < 7; j++) // Change from 6 to 3 to avoid accessing out of bounds
        {
            if (connect4[i][j] == connect4[i + 1][j] &&
                connect4[i + 1][j] == connect4[i + 2][j] &&
                connect4[i + 2][j] == connect4[i + 3][j] &&
                connect4[i][j] != ' ')
                return connect4[i][j]; // Vertical win
        }
    }

    // Check diagonally (upward direction)
    for (int i = 3; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (connect4[i][j] == connect4[i - 1][j + 1] &&
                connect4[i - 1][j + 1] == connect4[i - 2][j + 2] &&
                connect4[i - 2][j + 2] == connect4[i - 3][j + 3] &&
                connect4[i][j] != ' ')
                return connect4[i][j]; // Diagonal win (upward)
        }
    }

    // Check diagonally (downward direction)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (connect4[i][j] == connect4[i + 1][j + 1] &&
                connect4[i + 1][j + 1] == connect4[i + 2][j + 2] &&
                connect4[i + 2][j + 2] == connect4[i + 3][j + 3] &&
                connect4[i][j] != ' ')
                return connect4[i][j]; // Diagonal win (downward)
        }
    }

    return ' '; // No winner yet
}

int main()
{

    // storage connect4 array
    char connect4[6][7];
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 7; j++)
            connect4[i][j] = ' ';

    // input operations variables
    short iterations = 0;
    bool connect4_flag = true;
    char isX = 'X';
    short colum;
    do
    {
        // print connect4 board

        board(connect4);

        if (connect4_flag)
        {
            cout << "X_Player, Choose colum (0-6): ";
            isX = 'X';
            connect4_flag = false;
        }
        else
        {
            cout << "O_Player, Choose colum (0-6): ";
            connect4_flag = true;
            isX = 'O';
        }
        cin >> colum;

        // error handling
        while (colum < 0 || colum >= 7)
        {
            cout << "Invalid Input, Please choose correct colum (0-6):";
            cin >> colum;
        }

        // store user input in the connect4 array
        if ((colum >= 0 && colum < 7))
        {
            // fill connect4
            for (int i = 5; i >= 0; i--)
            {

                if (connect4[i][colum] == ' ')
                {
                    connect4[i][colum] = isX;
                    break;
                }
                // error handling
                while (connect4[i][colum] != ' ' && i == 0)
                {
                    cout << "Colum Filled, Please choose another colum: ";
                    cin >> colum;
                    if (connect4[i][colum] == ' ')
                        connect4[5][colum] = isX;
                }
            }
        }
        cout << "\n";
        
        // check winner
        char winner_flag = check_winner(connect4);
        if (winner_flag == 'X')
        {
            board(connect4);
            cout << "X_Player won ^_^\n";
            cout << "Game Over...\n"
                 << endl;
            break;
        }
        else if (winner_flag == 'O')
        {
            board(connect4);
            cout << "O_Player won ^_^\n";
            cout << "Game Over...\n"
                 << endl;
            break;
        }

        // program out
        iterations++;
        if (iterations == 42)
        {
            board(connect4);
            cout << "No win. ^_^\n";
            cout << "Game Over...\n"
                 << endl;
            break;
        }

    } while (iterations <= 42);

    return 0;
}
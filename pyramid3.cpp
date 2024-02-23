#include <iostream>

using namespace std;

int main()
{
    // user interface
    int hight;
    cout << "Please Enter Pyramid Hight: ";
    cin >> hight;
    int spaces = hight - 1;
    int stars = 1;

    // up pyramid
    {
        // hight loop
        for (int i = 0; i < hight; i++)
        {
            // spaces loop (i-1 >> 1)
            for (int j = 0; j < spaces; j++)
                cout << " ";

            // stars loop (2x-1 > 1)
            for (int j = 0; j < stars; j++)
                cout << "*";

            cout << endl;
            spaces--;
            stars += 2;
        }
    }

    // down pyramid
    {
        spaces += 1;
        stars -= 2;
        // hight loop
        for (int i = 0; i <= hight; i++)
        {
            // spaces loop (i-1 >> 1)
            for (int j = spaces; j > 0; j--)
                cout << " ";

            // stars loop (2x-1 > 1)
            for (int j = stars; j > 0; j--)
                cout << "*";

            cout << endl;
            spaces++;
            stars -= 2;
        }
    }

    return 0;
}
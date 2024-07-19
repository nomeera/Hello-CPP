#include <iostream>

using namespace std;

int main()
{
    int hight;
    cout << "Please Enter Pyramid Hight: ";
    cin >> hight;

    int spaces = hight-1;
    int numbers = 1;

    // hight loop
    for (int i = 0; i <= hight; i++)
    {
        // spaces loop
        for (int j = 0; j <= spaces; j++)
            cout << " ";

        // numbers loop
        for (int j = 0; j < numbers; j++)
        {
            if (j % 2 != 0)
                cout << i;
            else
                cout << " ";
        }
        cout << endl;
        spaces--;
        numbers += 2;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int length;

    cout << "Please Enter Square Length:  ";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 2 * length; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}

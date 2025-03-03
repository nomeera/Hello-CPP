#include <iostream>

using namespace std;

const int MAX = 100;

class Distance
{
private:
    int feet;
    float inches;

public:
    void getdist()
    {
        cout << "\n   Enter feet: ";
        cin >> feet;
        cout << "   Enter inches: ";
        cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'-" << inches << '\"';
    }
};

int main()
{
    Distance dist[MAX];
    int n = 0;
    char ans;
    cout << endl;

    do
    {
        cout << "Enter distance number " << n + 1;
        dist[n++].getdist();
        cout << "Enter another (y/n)?";
        cin >> ans;

        if (n >= MAX)
        {
            cout << "\nThe array is full !!!";
            break;
        }

    } while (ans != 'n');

    for (int j = 0; j < n; j++)
    {
        cout << "\nDistance number " << j + 1 << "is ";
        dist[j].showdist();
    }
    cout << endl;

    return 0;
}
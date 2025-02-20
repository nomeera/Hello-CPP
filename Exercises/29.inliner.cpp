#include <iostream>

using namespace std;

inline float ibstokg(float pounds)
{
    return 0.453592 * pounds;
}

int main()
{
    float ibs;

    cout << "\nEnter your weight in pounds: ";
    cin >> ibs;
    cout << "Your weight in kilograms is " << ibstokg(ibs) << endl;

    return 0;
}
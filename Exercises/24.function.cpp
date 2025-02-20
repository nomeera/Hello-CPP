#include <iostream>

using namespace std;

float ibstokg(float);

int main()
{
    float ibs, kgs;

    cout << "\nEnter your weight in pounds: "; cin >> ibs;
    kgs = ibstokg(ibs);
    cout << "Your weight in kilograms is " << kgs << endl;

    return 0;
}

float ibstokg(float pounds)
{
    float kilograms = 0.453592 * pounds;
    return kilograms;
}
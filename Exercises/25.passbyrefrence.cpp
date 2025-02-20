#include <iostream>

using namespace std;

void intfrac(float, float&, float& );

int main()
{
    float number, intpart, fracpart;
    do
    {
        cout << "\bEnter a real number: "; cin >> number;
        intfrac(number, intpart, fracpart);
        cout << "Integer part is " << intpart << ", fraction part is " << fracpart << endl;
    } while(number != 0.0);

    return 0;
}

void intfrac(float n, float& intp, float& fracp)
{
    long temp = static_cast<long>(n);
    intp = static_cast<float>(temp);
    fracp = n - intp;
}
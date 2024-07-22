#include <iostream>
#include "18.BigInt.h"

using namespace std;

int main()
{
    BigInt i1("99999999999999999999999999");
    BigInt i2("1");
    BigInt i3 = i1 + i2;
    i3++;
    ++i3;
    i3 += 5;
    i3 += i3;
    cout << i1 << endl;
    cout << i2 << endl;
    cout << i3 << endl;

    return 0;
}
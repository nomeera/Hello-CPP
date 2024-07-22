#include <iostream>

using namespace std;

int main()
{
    char name[] = "Abdullah";
    int x[10];
    cout << name << endl; // not print address because char data type considered special case in cpp
    cout << x << endl; // print address 
    return 0;
}
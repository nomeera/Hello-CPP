/*
Some variables used for function arguments can be very large; a large structure
would be an example. If an argument is large, passing by reference is more efficient because,
behind the scenes, only an address is really passed, not the entire variable.
Suppose you want to pass an argument by reference for efficiency, but not only do you want
the function not to modify it, you want a guarantee that the function cannot modify it.
*/

#include <iostream>

using namespace std;

void aFunc(int &, const int &);

int main()
{
    int alpha = 7;
    int beta = 11;
    aFunc(alpha, beta);
    
    return 0;
}
void aFunc(int & a, const int & b)
{
    a = 107;  //OK
    // b = 111;  //error: can’t modify constant argument
}
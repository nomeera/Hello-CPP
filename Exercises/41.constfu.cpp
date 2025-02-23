#include <iostream>

using namespace std;

class aClass
{
private:
    int alpha;

public:
    void nonFunc() { alpha = 99; }
    void conFunc() const 
    {
        // alpha = 99; ERROR: can’t modify a member 
    }
};

int main()
{

    return 0;
}
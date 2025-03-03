#include <iostream>
#include <cstring>

using namespace std;

class Part
{
private:
    char partname[30];
    int partnumber;
    double cost;

public:
    void setpart(char pname[], int pn, double c)
    {
        strcpy(partname, pname);
        partnumber = pn;
        cost = c;
    }
    void showpart() const
    {
        cout << "\nName= " << partname;
        cout << ", number= " << partnumber;
        cout << ", cost= $" << cost;
    }
};

int main()
{
    Part part1, part2;

    part1.setpart("handle bolt", 4473, 217.55);
    part2.setpart("start lover", 9924, 419.25);
    cout << "\nFirst part: ";
    part1.showpart();
    cout << "\nSecond part: ";
    part2.showpart();
    cout << endl;

    return 0;
}
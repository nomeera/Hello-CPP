#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("Man");
    string s2 = "Beast";
    string s3;

    s3 = s1;
    cout << "s3 = " << s3 << endl;

    s3 = "Neither " + s1 + " nor ";
    s3 += s2;
    cout << "s3 = " << s3 << endl;

    s1.swap(s3);
    cout << "s1 = " << s1 << endl;

    return 0;
}
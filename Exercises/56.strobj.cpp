#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    static const int SZ = 80;
    char str[SZ];

public:
    String() { str[0] = '\0'; }
    String(char s[]) { strcpy(str, s); }
    void concat(String s2)
    {
        if (strlen(str) + strlen(s2.str) < SZ)
            strcat(str, s2.str);
        else
            cout << "\nString too long!!!";
    }
    void display() const { cout << str; }

};

int
main()
{
    String s1("Merry Christmas! ");
    String s2 = "Season's Greetings!";
    String s3;

    cout << "\ns1=";
    s1.display();
    cout << "\ns2=";
    s2.display();
    cout << "\ns3=";
    s3.display();

    s3 = s1;
    cout << "\ns3=";
    s3.display();

    s3.concat(s2);
    cout << "\ns3=";
    s3.display();
    cout << endl;

    return 0;
}
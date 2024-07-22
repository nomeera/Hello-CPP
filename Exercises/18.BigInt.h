#include <string>
using namespace std;

class BigInt
{
private:
    string internalNumber;
    string AddTwoNumbers(string str1, string str2)
    {
        string result = "";
        int x1 = str1.size();
        int x2 = str2.size();

        // bidding process
        if (x1 > x2)
        {
            for (int i = 0; i < x1 - x2; i++)
                str2.insert(0, "0");
        }
        else
        {
            for (int i = 0; i < x2 - x1; i++)
                str1.insert(0, "0");
        }

        // adding process
        int reminder = 0;
        for (int i = str1.length() - 1; i >= 0; i--) // because string exist in memory from left to right and we adding from right to left
        {
            char c1 = str1[i];
            char c2 = str2[i];
            int res = (c1 - '0') + (c2 - '0') + reminder;
            reminder = res / 10;
            res = res % 10;
            result.insert(0, to_string(res));
        }
        if (reminder)
            result.insert(0, to_string(reminder));
        return result;
    }

public:
    BigInt() // constructor for default initialization
    {
        internalNumber = "0";
    }
    BigInt(string str) // another constructor if user input any string
    {
        internalNumber = str;
    }
    string GetInternalNumber() // this function to deal with private members (encapsulation)
    {
        return internalNumber;
    }

    // operator overloading
    BigInt operator+(BigInt i)
    {
        return BigInt(AddTwoNumbers(this->internalNumber, i.internalNumber));
    }
    BigInt &operator++(int)
    {
        internalNumber = AddTwoNumbers(this->internalNumber, "1"); // ++ operator when work : first increment this object value.
        return *this;                                              // and then return it.
    }

    BigInt &operator++()
    {
        internalNumber = AddTwoNumbers(this->internalNumber, "1");
        return *this;
    }
    BigInt &operator+=(int i)
    {
        internalNumber = AddTwoNumbers(this->internalNumber, to_string(i));
        return *this;
    }
    BigInt &operator+=(BigInt i)
    {
        internalNumber = AddTwoNumbers(this->internalNumber, i.internalNumber);
        return *this;
    }
    // if you find << operator and has ostream object at left and BigInt object at right
    friend ostream &operator<<(ostream &out, BigInt &i) // friend (this function is not part of class but can deal with class members to make overloading when left object is ostream (not BigInt))
    {
        out << i.GetInternalNumber(); // run i.GetInternalNumber()
        return out;                   // and then return ostream object (cout)
    }
};
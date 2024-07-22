#include <iostream>

using namespace std;

struct Student
{
    int Math;
    int Arabic;
    int English;
};

int main()
{

    Student x;
    x.Math = 100;
    x.Arabic = 95;
    x.English = 97;

    Student students[10];
    students[0].Math = 90;
    students[0].Arabic = 99;
    students[0].English = 88;

    Student *dynamic = new Student[10];
    dynamic[0].Arabic = 99;

    delete dynamic;
    return 0;
}
#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout << "ID :" << id << endl
             << "GPA :" << gpa << endl;
    }

    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{

    Student Alim, efti;
    Alim.setValue(101, 3.2);
    Alim.display();

    efti.setValue(110, 3.6);
    efti.display();
    getchar();
}
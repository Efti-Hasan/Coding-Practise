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
};

int main()
{

    Student Alim, efti;
    Alim.id = 101;
    Alim.gpa = 3.41;
    Alim.display();

    efti.id = 102;
    efti.gpa = 5.00;
    efti.display();
    getchar();
}
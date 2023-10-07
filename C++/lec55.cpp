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

    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{

    Student Alim(101, 3.2);
    Alim.display();

    Student efti(110, 3.6);
    efti.display();
    getchar();
}
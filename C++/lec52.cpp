#include<iostream>
using namespace std;

  class Student
    {   
        public:
        int id;
        double gpa;
    };

int main()
{
    Student Alim;
    Alim.id=101;
    Alim.gpa=3.41;
    cout <<endl <<"ID :" <<Alim.id <<endl <<"GPA :"<<Alim.gpa <<endl;

    Student efti;
    efti.id=101;
    efti.gpa=3.41;
    cout  <<"ID :" <<efti.id <<endl <<"GPA :"<<efti.gpa;
    getchar();
}
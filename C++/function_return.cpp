#include<iostream>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double cgpa;
    Student(int roll , int cls, double cgpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->cgpa=cgpa;
    }
};
Student* fun()
{
   Student* karim = new Student(23,10,5.01);
    //  Student Rahim(98,12,7.01);
    
     return karim;
    //  return Rahim;
}
int main()
{
    Student* ans=fun();
    cout <<ans->roll <<" " <<ans->cls<<" " <<ans->cgpa <<endl;
    delete(ans);
     //cout <<ans->roll <<" " <<ans->cls<<" " <<ans->cgpa <<endl;
    // cout <<Rahim.roll <<" " <<Rahim.cls <<" " <<Rahim.cgpa <<endl;
    
    return 0;
}
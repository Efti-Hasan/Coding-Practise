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
int main()
{
    Student karim(342, 12, 4.99);
    Student* rahim =new Student(342, 12, 4.99);
    cout <<rahim->roll <<" " <<rahim->cls <<" " <<rahim->cgpa <<endl;
    
    return 0;
}
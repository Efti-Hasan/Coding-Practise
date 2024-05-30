#include<iostream>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double cgpa;
    Student (int roll,int cls,double cgpa)
    {
       this->roll=roll;
       this->cls=cls;
       this->cgpa=cgpa;      
    }
};
int main()
{
    Student Rahim(23,70,3.8);
    Student Karim(45,10,3.99);

    cout <<Rahim.roll <<" " <<Rahim.cls << " " <<Rahim.cgpa <<endl; 
    cout <<Karim.roll <<" " <<Karim.cls << " " <<Karim.cgpa <<endl; 
    
    return 0;
}
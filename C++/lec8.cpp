#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n1,n2,sum,sub,mul,div,remainder;
    cout <<showpoint;
    cout <<fixed;
    cout <<setprecision(2);
    cout <<setw(20)<<"Enter two digits :";
    cin >> n1 >>n2;
    sum=n1+n2;
    cout <<setw(20) <<"Sum :" <<sum <<endl;

    cout <<noshowpoint;
    sub=n1-n2;
    cout <<setw(20)<<"Sub :" <<sub <<endl;
    
    mul=n1*n2;
    cout <<setw(20)<<"Multiplication :" <<mul <<endl;
    
    div=n1/n2;
    cout <<setw(20)<<"Division :" <<div <<endl;
         
   // remainder=n1 % n2;
   // cout <<"Remainder :" <<remainder <<endl;
}
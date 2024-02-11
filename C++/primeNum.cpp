#include<iostream>
using namespace std;
int main()
{
    int n,rem;
    int sum=0;
    int pro=1;
    int result=0;
    cout <<"n = ";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        pro=sum*rem;
         sum=sum+rem;
        n=n/10;
    }
    cout <<sum <<endl;
    cout <<pro <<endl;
    cout <<"Ans =" <<pro << sum <<endl;
}
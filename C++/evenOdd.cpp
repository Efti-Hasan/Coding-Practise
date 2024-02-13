#include<iostream>
using namespace std;

bool isEven(int a){
    if(a%2!=0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    cin >>n;
    if(isEven(n))
    {
        cout <<"Number is even" <<endl;

    }
    else
    {
        cout <<"Number is odd!" <<endl;
    }

    getchar();
}
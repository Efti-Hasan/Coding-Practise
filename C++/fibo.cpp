#include<iostream>
using namespace std;
int main()
{
    int first=0;
    int second=1;
    int fibo;
    for (int i = 1; i <=10; i++)
    {
        fibo=first+second;
        first=second;
        second=fibo; 
        cout <<fibo <<" ";
    }
            

    // 0 1 1 2 3 
    getchar();
}
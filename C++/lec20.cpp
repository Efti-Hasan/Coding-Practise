#include<iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Enter number to check even or odd :";
    cin >> num;
    if (num%2==0)
    {
       cout << "Even :" <<num;
    }

    else {
        cout <<"Odd :" <<num;
    }
    
}
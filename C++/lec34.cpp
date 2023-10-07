#include<iostream>
using namespace std;
int main()

{
    int i,mark[5];
    
    for ( i = 0; i <=4; i++)
    {
        cout <<"Enter mark " << i <<" : ";
       cin >>mark[i];
    }
cout <<"Marks are : ";
    for ( i = 0; i <=4; i++)
    {
        
       cout <<mark[i] <<" ";
    }
}
    

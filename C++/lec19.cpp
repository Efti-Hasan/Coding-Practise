#include<iostream>
using namespace std ;
int main()
{   int num1,num2,out;
    
    cout <<"Enter two digit :";
    cin >>num1 >>num2 ;
   if (num1>num2)
   {
     cout <<"Bigger one is :" <<num1 ;
   }
   
    else if (num1<num2)
   {
     cout <<"Bigger one is :" <<num2 ;
   }
   

   else if (num1==num2)
   {
     cout <<"Numbers are eqqual :)" ;
   }
   else {
    cout <<"Invalid input";
   }
}
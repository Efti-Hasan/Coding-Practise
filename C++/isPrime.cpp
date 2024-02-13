#include<iostream>
using namespace std;

// 1 ->prime
// 0 ->not a prime

bool isPrime(int n)
{
    int count=0;
    for(int i=2 ; i<n ; i++)
    {
        if (n%i==0)
        {
           return 0;
        }    
    }

    return 1;
}

int main()
{
    int n;
    cout <<"Enter number for checking prime or not :";
    cin >>n;
   if (isPrime(n))
   {
    cout <<"This is a prime number" <<endl;
   }
   
   else 
   {
    cout <<"This is not a prime number." <<endl;
   }

   getchar();
}
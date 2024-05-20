#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a;
    int even=0,odd=0,pos=0,neg=0;
    for(int i=1; i<=n; i++)
    {
        cin >>a;
        if(a%2==0)
       {
        even++;
       }
       else
       {
        odd++;
       }
       if(a>0)
       {
        pos++;
       }
       else if(a<0)
       { 
        neg++;
       }
    }
   

    cout <<"Even: " <<even <<endl;
    cout <<"Odd: " <<odd <<endl;
    cout <<"Positive: " <<pos <<endl;
    cout <<"Negative: " <<neg <<endl;
}
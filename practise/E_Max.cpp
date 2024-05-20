#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    long long int a;
    int max=0;
    for(long long int i=1; i<=n; i++)
    {
        cin >>a;
        if(a>max)
        {
          max=a;
        }
    }
   cout <<max;
}
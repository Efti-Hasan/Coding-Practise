#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res,a; cin >>n;
    while(n!=0)
    {
        res=n%10;
        a=n/10;
    }
    if(a%res==0 || res%a==0) cout <<"YES";
    else cout <<"NO";
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q; cin>>q;
    while(q--)
    {
         int n; cin>>n;
    do
    {
        cout <<n%10 << " ";
         n= n/10;
    } while (n!=0);
    
    cout<<endl;
    }
   
}
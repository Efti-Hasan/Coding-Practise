#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b; cin>>a;
    char s; cin >>s;
    cin >>b;
    if(a < b || a==b) cout <<"Right";
    else if(a > b) cout <<"Right";
    else 
    cout<<"Wrong" ;
    
    return 0;
}
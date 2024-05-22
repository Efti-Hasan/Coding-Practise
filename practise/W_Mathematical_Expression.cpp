#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c; cin >>a;
    char s,q; cin >>s >>b >>q >>c;
     if(a + b == c) cout <<"Yes" ;
     else cout << a+b;
     else if(a - b == c) cout <<"Yes" ;
     else
     cout << a - b;
     if(a * b == c) cout <<"Yes" ;
     else
     cout << a*b;
    return 0;
}
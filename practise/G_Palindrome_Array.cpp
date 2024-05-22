#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) 
    {
       cin >> arr[i];
    }
    int ans[n];
   
    for (int i = n-1 ; i >=0 ; i--)  
    {
        ans[i+]=arr[i];
    }
 
       if(arr==ans)
       {
        cout <<"YES";
       }
       else
       cout <<"NO";
    

}
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
    int search, pos = -1;
    cin >> search;
    for (int i = 0; i < n; i++)
     {
        if (arr[i] == search) 
        {
            pos = i; 
            break;  
        }
    }
    if (pos == -1) 
    {
        cout << "-1";
    } 
    else 
    {
        cout << pos ;  
    }

    return 0;
}

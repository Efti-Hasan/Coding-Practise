#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0 ; i<n; i++)
    {
        cin >>arr[i] ;
    }
    int cnt[7]={0};
    for(int i=0; i<n; i++)
    {
        cnt[arr[i]]++;
        
    }

    for (int i = 0; i < 7; i++)
    {
        cout <<i <<" -> " <<cnt[i] <<endl;
    }
    
    return 0;
}
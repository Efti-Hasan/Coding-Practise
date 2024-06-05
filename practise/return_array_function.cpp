#include<iostream>
using namespace std;
int *p(int n)
{
    int *arr= new int[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    // sort(arr,arr+n,greater<int>());
    return arr;
    
}
int main()
{
    int n; cin>>n;
    int *a=p(n);
     for(int i=0; i<n; i++) cout << a[i] <<" ";
    
    return 0;
}
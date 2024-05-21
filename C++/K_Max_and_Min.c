#include<stdio.h>
int main()
{
  int n; //5
  scanf("%d",&n);//5
  int arr[n];
  for(int i=0; i<n; i=i+1)
  {
    scanf("%d",&arr[i]); // 10 20 30 40 50
  }                      // 0   1  2  3  4
  int sum=0;
  for(int i=0; i<n; i++)
  {
    sum=sum+arr[i]; // 150
  }
  printf("Sum : %d ",sum);
  
  return 0;
}
#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0; i<test; i++)
    {
     int m1,m2,d;
    scanf("%d %d %d",&m1,&m2,&d);
 
    int ans = d- (d*m1)/(m1+m2);
    printf("%d\n",ans); 
    }
   
}
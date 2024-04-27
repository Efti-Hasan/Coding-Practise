#include<stdio.h>
#include<stdlib.h>

int main()
{
int *p,n,*i;
printf("Enter the number of integer to input:");
scanf("%d",&n);
p=(int *) malloc(n* sizeof(int));
if(p==NULL)
{ printf("memory not available");

exit(1);

}
for(i=p;i<p+n;i++)
{ printf("enter integer : ");

scanf("%d",i);

}
for(i=p;i<p+n;i++)
{ printf("%d ",*i);
}
}
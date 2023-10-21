#include<stdio.h>
int main()
{
    int numTerms;
    printf("Enter the terms of Lucas series :");
    scanf("%d",&numTerms);

    int first=1,second=1;
    printf("Lucas series up to %d terms : \n",numTerms);
    printf("%d %d",first,second);

    for (int i = 3; i < numTerms; i++)
    {
        int next=first + second;
        printf("%d ",next);
        first=second;
        second=next;
    }
    printf("\n");
    

    return 0;
}
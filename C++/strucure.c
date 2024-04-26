#include<stdio.h>
#include<ctype.h>
struct marks
 {
    int sub[3];
    int total;
};
int main()
{
    struct marks students[3]={{45, 67, 81, 0}, {75, 53, 69, 0}, {57, 36, 71, 0}};
    struct marks total={0};

    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for(j=0; j<3; j++)
        {
            students[i].total+=students[i].sub[j];
            total.sub[j]+=students[i].sub[j];
        }
        total.total+=students[i].total;
    }
     printf("Student Total \n\n");
    for ( i = 0; i < 3; i++)
    {
        printf("Student[%d] :%d\n",i+1,students[i].total);
    }
    
     printf("\nSubject Total \n\n");
    for ( j = 0; j < 3; j++)
    {
        printf("Subject[%d] :%d \n",j+1,total.sub[j]);
    }
    
    printf("\nGrand Total :%d\n",total.total);
 
}
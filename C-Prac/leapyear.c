#include<stdio.h>
int main()
{
    int year1,year2,i;
    printf("Enter initial year :");
    scanf("%d",&year1);
    
    printf("Enter final year :");
    scanf("%d",&year2);

//     // if (year1%4==0)
//     // {
//     //     printf("Leap year :%d",year1);
//     // }
    
     if (year1%400==0 || year1%4==0 && year1%100!=0)
    {
       for ( i=year1; i<=year2; i++)
        {
           printf("Leap year Range :%d ,",i);
        }
        
        // printf("Leap year :%d ,",year1);
    }

//     // else if (year1%4==0 && year1%100!=0)
//     // {
//     //     printf("Leap year :%d",year1);
//     // }

    else{
        printf("Not a leap year=%d",year1);
        
    }

    
 }


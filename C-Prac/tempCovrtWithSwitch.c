#include<stdio.h>
int main()
{
    int choice;
    float f,c;
    printf("Temparature convertion Menu\n");
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n");
    printf("Enter your choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        {
          printf("Enter the fahrenheit temparature :");
          scanf("%f",&f) ;
           c=(f-32)/1.8;
           printf("Enter the celsius temparature :%.2lf",c);
        }
        break;
    case 2:
        {
                printf("Enter the celsius temparature :");
          scanf("%f",&c) ;
          f=(c*1.8)+32;
           printf("Enter the celsius temparature :%.2lf",f);
        }
        break;
    
    default:
        break;
    }
}
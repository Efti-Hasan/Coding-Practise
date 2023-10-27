#include<stdio.h>

// global structre
struct Person
{
   int age;
   float salary;
};


int main()
{
     struct Person person1,person2; //local variable
   printf("Enter information for first person.\n");
    printf("Enter age for the first person :");
    scanf("%d",&person1.age);
    
    printf("Enter salary for the first person :");
    scanf("%f",&person1.salary);
    
    printf("Enter information for first person.\n");

    printf("Enter age for the second person :");
    scanf("%d",&person2.age);
    
    printf("Enter age for the second person :");
    scanf("%f",&person2.salary);
    

    printf("Age =%d\n",person1.age);
    printf("Age =%.2f\n",person1.salary);

      printf("\nFor Person2\n");
    printf("Age =%d\n",person2.age);
    printf("Age =%.2f\n",person2.salary);



    getchar();
}
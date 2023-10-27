#include<stdio.h>

// global structre
struct Person
{
   int age;
   float salary;
};


int main()
{
     struct Person person1={27,25550.25}; //local variable
     struct Person person2={31,27987.90}; //local variable
     struct Person person3=person1; //local variable
   
 

    printf("Age =%d\n",person1.age);
    printf("Age =%.2f\n",person1.salary);

      printf("\nFor Person2\n");
    printf("Age =%d\n",person2.age);
    printf("Age =%.2f\n",person2.salary);

      printf("\nFor Person3\n");
    printf("Age =%d\n",person3.age);
    printf("Age =%.2f\n",person3.salary);



    getchar();
}
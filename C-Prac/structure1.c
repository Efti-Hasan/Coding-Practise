#include<stdio.h>

// global structre
struct Person
{
   int age;
   float salary;
};
struct Person person1,person2; ////global variable


int main()
{
    // struct Person person1,person2; //local variable

    person1.age=27;
    person1.salary=1250.50;

    printf("For Person1\n");
    printf("Age =%d\n",person1.age);
    printf("Age =%.2lf\n",person1.salary);

    person2.age=76;
    person2.salary=112000.80;

      printf("\nFor Person2\n");
    printf("Age =%d\n",person2.age);
    printf("Age =%.2lf\n",person2.salary);



    getchar();
}
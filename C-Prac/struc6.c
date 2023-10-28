#include<stdio.h>
#include<string.h>

struct Person
{
    char name[20];
    int age;
    float salary;
};

void display(struct Person p)
{
    printf("\nName :%s\n",p.name);
    printf("Age :%d\n",p.age);
    printf("Salary :%.2f\n",p.salary);
}

int main()
{
    struct Person person1,person2;

    strcpy(person1.name,"Efti Hasan");
    person1.age =20;
    person1.salary =18921.29;

    display(person1);
    
    strcpy(person2.name,"Messi");
    person2.age =35;
    person2.salary =1000000.99;

    display(person2);

}
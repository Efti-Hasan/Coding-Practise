#include<stdio.h>
#include<ctype.h>

struct student
{
    char name[50];
    int age;
    float cgpa;

};

void display(struct student Student)
{
  printf("Name :%s\n",Student.name);
  printf("Age :%d\n",Student.age);
  printf("CGPA :%.2lf\n",Student.cgpa);

}

int main()
{
  struct student students[4];

  for (int index = 0; index < 4; index++)
  {
      printf("Enter your name :");
      fflush(stdin);
     gets(students[index].name);

    printf("Enter your age :");
    scanf("%d",&students[index].age);

    printf("Enter your CGPA :");
    scanf("%f",&students[index].cgpa);

  }
  
  for (int index = 0; index <4 ; index++)
  {
    printf("Information for %d ",index+1);
    display(students[index]);
  }
  

  getchar();
}
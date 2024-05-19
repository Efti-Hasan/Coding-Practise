#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);

//   if(n==1)
//   {
//     printf("One\n");
//   }
//   else if(n==2)
//   {
//     printf("Two\n");
//   }
//  else if(n==3)
//   {
//     printf("Three\n");
//   }
//   else if(n==4)
//   {
//     printf("Four\n");
//   }
//   else if(n==5)
//   {
//     printf("Five\n");
//   }
//   else
//   printf("Invalid Number\n");

    switch(n)
    {
        case 1: 
        printf("One\n");
        break;
        case 2: 
        printf("Two\n");
        break;
        case 3: 
        printf("Three\n");
        break;
        case 4: 
        printf("Four\n");
        break;
        case 5: 
        printf("Five\n");
        break;
        default:
        printf("invalid number\n");
    }

  return 0;
}
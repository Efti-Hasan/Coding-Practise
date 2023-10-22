#include<stdio.h>
int main()
{
    int num[30]={10,2,20,15,35,36,85},n,pos=-1;
      int value;
    printf("Enter any value  :");
    scanf("%d",&value);
  
    for (int i = 0; i < 7; i++)
    {
        if (value==num[i])
        {
            pos =i+1;
            break;
        }
        
    }

    if (pos==-1)
    {
        printf("Item is not found");
    }
    
    else{
        printf("The value is found at %dth position.\n",pos);
    }
    
    
}
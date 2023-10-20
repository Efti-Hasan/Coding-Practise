    #include<stdio.h>
    int main()
    {
        int n1,n2,n3;
        printf("Enter Number1 :");
        scanf("%d",&n1);
        
        printf("Enter Number2 :");
        scanf("%d",&n2);

        printf("Enter Number3 :");
        scanf("%d",&n3);

        if (n1>n2 && n1>n3)
        {
            printf("Large :%d",n1);
        }
        
       else if (n1<n2 && n2>n3)
        {
            printf("Large :%d",n2);
        }
        
       else if (n3>n2 && n3>n1)
        {
            printf("Large :%d",n3);
        }
        
        else {
            printf("Number are equal!");
        }

        getchar();


    }
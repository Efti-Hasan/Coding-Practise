#include<stdio.h>
int main()
{
    // arithmatic operation
    //  +, - , * , / , % 
    int a,b;
    printf("Enter the value : ");
    scanf("%d %d",&a,&b);
    int sum=a +b; //9
    int dif= a-b; //-1
    int mul= a*b; //20
    int div= a /b; //0.8
    int mod=a%b;
    printf("Sum : %d \n",sum);
    printf("Diff: %d \n",dif);
    printf("Multipliaction : %d\n",mul);
    printf("Divisioon : %d\n",div);
    printf("Mod is %d\n",mod);

    return 0;
}
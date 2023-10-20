#include<stdio.h>
int main()
{
    // float cen,fah;
    // printf("Enter Centrigrade temp :");
    // scanf("%f",&cen);
    // fah=(cen*1.8)+32;
    // printf("Fahrenheit temp is :%.2f",fah);

    float cen,fah;
    printf("Enter fahrenheit temp :");
    scanf("%f",&fah);
    cen=(fah-32)/1.8;
    printf("Centrigrade temp is :%.2f",cen);
    
}
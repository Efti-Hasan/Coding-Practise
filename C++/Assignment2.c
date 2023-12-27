#include <stdio.h>
int main()
 {
    int age;
    char vehicleType;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter the type of vehicle you want to drive (C for car, M for motorcycle): ");
    scanf(" %c", &vehicleType); 

    if (age >= 18) 
    {
        if (vehicleType == 'C' || vehicleType == 'c') 
        {
         printf("You are eligible for a car driving license.\n");
        } 
        else if (vehicleType == 'M' || vehicleType == 'm') 
        {
            printf("You are eligible for a motorcycle driving license.\n");
        } 
        else 
        {
            printf("Invalid vehicle type entered.\n");
        }
    } 
    else 
    {
        printf("You are not eligible for a driving license due to age.\n");
    }

    return 0;
}

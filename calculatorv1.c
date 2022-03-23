#include <stdio.h>
#include <stdlib.h>

int main()
{
int a, b, operation, sum, difference, multiplication, modulus;
float division;
printf("To add please press 1 \n");
printf("To subtract please press 2 \n");
printf("To divide please press 3 \n");
printf("To multiply please press 4 \n");
printf("To find the modulus please press 5 \n");
scanf("%d", &operation);

switch (operation)
{
case 1:
    printf("Please enter the first number: \n");
    scanf("%d", &a);
    printf("Please enter the second number: \n");
    scanf("%d", b);
    sum = a+b;
    printf("The sum of %d and %d is %d.", a, b, sum);
    break;
case 2:
    printf("Please enter the first number: \n");
    scanf("%d", &a);
    printf("Please enter the second number: \n");
    scanf("%d", b);
    difference =a-b;
    printf("The difference of %d and %d is %d.", a, b,difference );
    break;
case 3:
    printf("Please enter the first number: \n");
    scanf("%d", &a);
    printf("Please enter the second number: \n");
    scanf("%d", b);
    division =a/b;
    printf("The division of %d and %d is %.2f.", a, b,division );
    break;
case 4:
    printf("Please enter the first number: \n");
    scanf("%d", &a);
    printf("Please enter the second number: \n");
    scanf("%d", b);
    multiplication =a*b;
    printf("The multiplication of %d and %d is %d.", a, b,multiplication);
case 5:
    printf("Please enter the first number: \n");
    scanf("%d", &a);
    printf("Please enter the second number: \n");
    scanf("%d", b);
    modulus =a%b;
    printf("The modulus of %d and %d is %d.", a, b,modulus);
    break;
default:
    break;
}


    return 0;
}
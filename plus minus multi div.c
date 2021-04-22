#include<stdio.h>
int main()
{

    int num1,num2,sum,sub,mult;
    double div;

    printf("Enter the two numbers: ");
    scanf("%d%d", &num1,&num2);

    sum=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    div=(double)num1/num2;

printf("\n %d is the sum of %d+%d \n %d is the substraction of %d-%d \n %d is the multiplication %d*%d \n %.2lf is the quotient of %lf/%lf",sum,num1,num2,sub,num1,num2,mult,num1,num2,div,num1,num2);



return 0;

}

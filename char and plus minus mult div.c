#include<stdio.h>
int main()
{
    int num1,num2,sum,sub,multi;
    double div;

    char sign;

    printf("Enter the two numbers: ");
    scanf("%d%d",&num1,&num2);

    sum=num1+num2;
    sign='+';
    printf("\n%d %c %d=%d", num1, sign,num2,sum);


    sub=num1-num2;
    sign='-';
    printf("\n%d %c %d=%d",num1,sign,num2,sub);

    multi=num1*num2;
    sign='*';
    printf("\n%d %c %d=%d",num1,sign,num2,multi);

    div=(double)num1/num2;
    sign='/';
    printf("\n%d %c %d=%.2lf",num1,sign,num2,div);

//num2=0 dile garbage value show kore tokhon %d dite hobe


    return 0;


}

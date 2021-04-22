#include<stdio.h>
int main()
{

    int divisor,divison,quot,rem,x;

    printf("Enter the divison and divisor: ");
    scanf("%d%d", &divison,&divisor);

    quot=divison/divisor;
    x=divisor*quot;
    rem=divison-x;
    printf("%d is Remainder", rem);


    return 0;

}

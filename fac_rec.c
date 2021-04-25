#include<stdio.h>
int fac_recursive(int num);
int main()
{
    int num;
 printf("Enter the number\n");
 scanf("%d",&num);
 printf("Factorial of the number=%d",fac_recursive(num));
 return 0;
}
int fac_recursive(int num)
{
    if(num==1)
        return 1;
    else
       return num*fac_recursive(num-1);
}

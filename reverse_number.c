#include<stdio.h>
int main()
{

    int num,rem,reverse=0;
   printf("Enter a Positive number: ");
   scanf("%d",&num);
   while(num)
   {
       rem=num %10;
       reverse=reverse*10+rem;
       num=num/10;
   }
   printf("Reverse number=%d",reverse);
   return 0;
}

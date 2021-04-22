#include<stdio.h>
int check_armstrong(int num);
int main()
{
  int num;

printf("Enter a Positive number to check if its ARMSTRONG number or not\n");
scanf("%d",&num);
if(check_armstrong(num))
{
 printf("ARMSTRONG number=%d\t",num);
}
else
{
 printf("NOT ARMSTRONG number=%d\t",num);
}
return 0;
}
int check_armstrong(int num)
{
   int temp,rem,sum=0;
   temp=num;
   while(num>0)
   {
       rem=num%10;
       sum=sum +(rem* rem * rem);
       num=num /10;
   }
if(temp==sum)
   return 1;
   else
    return 0;

}

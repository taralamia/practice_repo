#include<stdio.h>
int main()
{
   int num,temp,rem,sum=0,res;
printf("Enter any number to check if its ARMSTRONG number or not\n");
scanf("%d",&num);
temp=num;   
  while (num>0)
  {
        rem=num % 10;
        res=rem* rem * rem;
        sum=sum + res ;
         num=num /10;
  }
  if(temp==sum)
     printf("%d is an ARMSTRONG number",temp);
else 
    printf("%d is not an ARMSTRONG number",temp);
 return 0;    
}
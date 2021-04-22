#include<stdio.h>
int check_stronggnum(int num);
int fac_print(int rem);
int main()
{
    int num;
printf("Enter the number to check if its STRONG number or not\n");
scanf("%d",&num);
 if(check_stronggnum(num))
 {
     printf("STRONG number= %d",num);
 }
 else
 {
     printf("NOT STRONG num=%d",num);
 }
 return 0;
}
int check_stronggnum(int num)
{
int temp,rem,sum=0;
   temp=num;
while(num>0)
{
    rem=num %10;

    sum=sum + fac_print(rem);
    num= num /10;
}
if(temp==sum)
   return 1;
   else
     return 0;
}
int fac_print(int rem)
{
  int i,fac=1;
  for(i=1; i<=rem ; i++)
  {
      fac=fac *i;
  }
  return fac;
}

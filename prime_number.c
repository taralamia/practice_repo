#include<stdio.h>
int check_prime(int n);
int main()
{  
   int num,flag;
   printf("Enter any number to check if its PRIME NUMBER or NOT\n");
   scanf("%d",&num);
  if(check_prime(num)==0)
  {
      printf("%d is a PRIME number",num);
  }
  else 
  {
      printf("%d is not a PRIME number",num);
  }
return 0;
}
int check_prime(int n)
{
  int i,flag=0;
for(i=2; i<=n/2; i++)
{
    if(n%i==0)
    {
        flag=1;
        break;
    }
}
return flag;

}
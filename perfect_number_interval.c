#include<stdio.h>
int perfect_num(int n);
int main()
{
   int ll,ul;
   printf("Enter the lower limit and upper limit: ");
   scanf("%d%d",&ll,&ul);
   for(ll; ll<=ul ; ll++)
   {
       if(perfect_num(ll))
     {
         printf("Perfect Number= %d\t",ll);
     }
   }
return 0;
}
int perfect_num(int n)
{
int i=1,sum=0;  
  while(i<n)
  {
      if(n%i==0)
      {
          sum+=i;
      }
      i++;
  }
if(sum==n)
   return 1;
   else
       return 0;
}
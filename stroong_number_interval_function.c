#include<stdio.h>
int count_strongnum(int temp);
int print_fac(int rem);
int main()
{
   int num,s_nm,e_nm,temp;
   printf("Enter the Starting and Ending Number\n");
   scanf("%d%d",&s_nm,&e_nm);
for(num=s_nm; num<=e_nm; num++)
{
    temp=num;
    if(count_strongnum(temp)==num)///calling the user defined function
    {
        printf("STRONG NUMBER= %d\n",num);
    }

}

}
int count_strongnum(int temp)
{
   int rem,sum=0;

   while(temp>0) ///finding the strong number
   {
      rem=temp %10;
      sum=sum+ print_fac(rem); ///calling the print_fac function to find  out the factorial value
      temp=temp /10;
   }
      return sum; ///returning the sum value from where it is called
}
int print_fac(int rem)
{
   int i,fac=1;
   for(i=1; i<=rem; i++)
   {
       fac=fac*i;
   }
   return fac;
}

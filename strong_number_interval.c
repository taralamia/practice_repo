#include<stdio.h>
int main()
{
  int i,num,temp,rem,sum,fac;
  int ll,ul;
printf("Enter the lower limit and upper limit\n");
scanf("%d%d",&ll,&ul);

 for(num=ll; num<=ul; num++)
 {
     temp=num;
     sum=0;
 while(temp>0)
 {
     rem= temp% 10;
     fac=1;
     for(i=1;i<=rem;i++)
     {
       fac=fac *i;

     }
  sum=sum +fac;
  temp=temp /10;
 }
if(num==sum)
printf("STRONG number=%d\n",num);

 }
return 0;

}

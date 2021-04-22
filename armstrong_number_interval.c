#include<stdio.h>
int main()
{
  int temp,rem,sum=0,num;
  int ll,ul;
  printf("Enter the lower limit and upper limit\n");
  scanf("%d%d",&ll,&ul);
for(num=ll;num<=ul;num++)
{  
  temp=num;
  sum=0;
  while(temp>0)
  {
    rem=temp %10;  
    sum=sum+(rem * rem * rem);
    temp=temp /10;
  }
  if(num==sum)
  printf("ARMSTRONG number= %d\n",num);
}


return 0;

}

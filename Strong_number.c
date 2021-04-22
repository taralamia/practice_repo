#include<stdio.h>
int main()
{

    int i,num,temp,rem,fac=1,sum;

    printf("Enter any number to check if its STRONG number or not\n");
    scanf("%d",&num);

 temp=num;
  for(num; num>0;num=num/10)
    {
        fac=1;
        rem=num%10;
 for(i=1; i<=rem ; i++)
 {
     fac*=i;
 }
        printf("\nFactorial of %d is %d\n",rem,fac);

      sum=sum+fac;
    }
    if(temp==sum)
    {
        printf("\n%d is a Strong number\n",temp);
    }
    else
    {
      printf("%d is a Strong number\n",temp);
    }
      return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{

    int num,temp,i,rem,sum;
    printf("Enter any number to check its Armstrong or not\n");
    scanf("%d",&num);

 temp=num;
 for(temp=num;num>0;num=num/10)
 {
     rem=num%10;
    sum=sum+(rem * rem * rem);

 }

 if(temp==sum)
 {
     printf("%d is an ARMSTRONG Number\n",temp);
 }
 else
 {
     printf("%d is not an ARMSTRONG number",temp);
 }
 return 0;
}

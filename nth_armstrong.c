#include<stdio.h>
int check_armstrong(int n);
int main()
{
    int i,count=0,pos,arm;
    scanf("%d",&pos);
    for(i=1;count<pos;i++)
    {
        if(check_armstrong(i))
        {
            count++;
            arm=i;
        }
    }
    printf("%d",arm);
   return 0;
}
int check_armstrong(int n)
{
   int temp,rem,sum=0;
   temp=n;
   while(temp>0)
   {
       rem=temp%10;
       sum=sum+rem*rem*rem;
       temp=temp/10;
   }
   if(n==sum)
     return 1;
   else
    return 0;

}

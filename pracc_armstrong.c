#include<stdio.h>
int check_armstrong();
int main()
{
   int sn,en,temp,num;
printf("Enter the Starting and Ending Number\n");
scanf("%d%d",&sn,&en);

  for(num=sn; num<=en; num++)
  {
      temp=num;
     if(check_armstrong(temp)==num)
     {
         printf("ARMSTRONG NUMBER= %d\n",num);

     }

  }

}
int check_armstrong(int temp)
{
    int sum=0,rem;
    while(temp>0)
    {
        rem= temp%10;
        sum=sum +(rem*rem*rem);
        temp=temp /10;

    }

    return sum;
}

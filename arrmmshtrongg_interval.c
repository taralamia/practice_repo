#include<stdio.h>
int count_armstrong(int );
int main()
{
    int temp,num,s_nm,e_num,c=0;

printf("Enter the Starting and Ending Number\n");
scanf("%d%d",&s_nm,&e_num);
   for(num=s_nm; num<=e_num; num++)
   {
       temp=num;
       if(count_armstrong(temp)==num) ///Calling the user defined function
       {
           printf("ARMSTRONG NUMBER=%d\n",num);
           c++;
       }
   }
printf("The total number of ARMSTRONG NUMBER is %d\n",c); ///counting the total Armstrong number from the entered interval///

  return 0;
}
int count_armstrong(int temp)
{
    int rem,sum=0;
    while(temp>0)///Finding the Armstrong number///
    {
        rem= temp%10;
        sum=sum+ rem*rem*rem;
        temp=temp /10;
    }
    return sum;///returning the sum value obtained from the while loop///
}

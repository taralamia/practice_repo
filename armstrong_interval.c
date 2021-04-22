#include<stdio.h>
int print_armstrong(int temp);
int main()
{
    int s_num,e_num,num,temp,c=0;

    printf("Enter the Starting number and Ending number\n");
    scanf("%d%d",&s_num,&e_num);

    for(num=s_num; num<=e_num; num++)///loop to transfer all the number of range to function arm//
    {

        temp=num;
        if(print_armstrong(temp)==num) ///calling function/
        {
            printf("ARMSTRONG NUMBER=%d\n",num);
            c++;
        }

    }
  printf("the number of armstrong numbers is:%d",c);///counting armstrong numbers//

}
int print_armstrong(int temp)
{
    int rem,sum=0;

    while(temp>0) ///armstrong number process loop//
    {
        rem=temp %10;
        sum=sum +(rem * rem *rem);
        temp=temp /10;
    }
    return sum;  ///return the value of sum obtained from while loop//

}

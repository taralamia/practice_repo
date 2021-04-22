#include<stdio.h>
int reverse_num(int num);
int power(int num,int n1);
int count(int num);
int main()
{
    int num,rev;
printf("Enter a Positive Number\n");
scanf("%d",&num);

  rev=reverse_num(num);
 printf("REVERSE NUMBER=%d",rev);
    return 0;
}
int reverse_num(int num)
{
if(num==0)
    return 0;
else
return ((num%10)*(power(10,(count(num))-1))+reverse_num(num/10));
                          //n1..//
}
int count(int num)
{
    if(num==0)
      return num;
    else
        return 1+count(num/10);

}
int power(int num,int n1)
{
    if(n1==0)
        return 1;
    else
        return num* power(10,n1-1);

}

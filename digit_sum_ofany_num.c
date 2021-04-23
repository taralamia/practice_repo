#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter any Number\n");
    scanf("%d",&num);

 while(num)
 {
     rem=num%10;
     sum=sum+rem;
     num=num/10;
 }
    printf("SUM of the Digits= %d",sum);
return 0;
}

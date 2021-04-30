#include<stdio.h>
int check_strongnum(int n);
int print_fac(int rem);
int main()
{
    int i,count=0,pos,strong;
    scanf("%d",&pos);

    for(i=1; count<pos; i++)
    {
        if(check_strongnum(i))
        {
            count++;
            strong=i;
        }
    }
    printf("%d",strong);
    return 0;
}
int check_strongnum(int n)
{
    int sum=0,rem,temp;
    temp=n;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum+print_fac(rem);
        temp=temp/10;
    }
    if(n==sum)
        return 1;
    else
        return 0;

}
int print_fac(int rem)
{
    int i,fac=1;
    for(i=1;i<=rem;i++)
    {
        fac=fac*i;
    }
    return fac;
}

#include<stdio.h>
int isPrime(int);
int main ()
{
    int pos,i,count=0,prime;
    scanf("%d",&pos);

    for(i=2;count<pos;i++)
        {
            if(isPrime(i)!=1)
            {
                count++;
                prime=i;
            }
        }
    printf("%d",prime);
}
int isPrime(int x)
{
    int i=2,isPrime=0;

    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            isPrime = 1;
            break;
        }
    }
     if(isPrime == 0)
       return 0;
     else
        return 1;
}

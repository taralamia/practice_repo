#include<stdio.h>
int checkPrime(int n);

int main()
{
    int ll,ul;

    printf("Enter the lower limit and upper limit: ");
    scanf("%d %d", &ll, &ul);

    for(ll;ll<=ul;ll++)
    {
        if(checkPrime(ll)==0)
        {
            printf("%d\t",ll);
        }
    }


  return 0;
}
int checkPrime(int n)
{
    int i,flag=0;

    for(i=2; i<=n/2;i++)
    {
        if(n%i==0)
        {
             flag=1;
            break;
        }

    }
  if(flag==0)
  return 0;
else
    return 1;
}

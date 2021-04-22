#include<stdio.h>
int isprime(int sn);
int main()
{
  int sn,en;
  printf("Enter the Starting and Ending number\n");
  scanf("%d%d",&sn,&en);
  for(sn; sn<=en;sn++)
  {
    if(isprime(sn)==0)
    {
        printf("PRIME NUMBER= %d\n",sn);
    }
  }


}
int isprime(int sn)
{
  int i,flag=0;
  for(i=2; i<=sn/2; i++)
  {
      flag=0;
      if(sn%i==0)
      {
       flag=1;
       break;
      }
  }
   return flag;
}
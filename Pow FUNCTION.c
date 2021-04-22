#include<stdio.h>
int powerFunction(int b, int p);
int main()
{
   int b,p,outp;
   printf("Enter the value of b and p: ");
   scanf("%d%d", &b,&p);

   outp=powerFunction(b,p);
    printf("%d^%d=%d",b,p,outp);

}
int powerFunction(int b, int p)
{
    int res=1;
    for(int i=1; i<=p; i++)

    res*=b;
    return res;
}

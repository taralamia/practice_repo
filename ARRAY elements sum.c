#include<stdio.h>
int main()
{

    int i,s=0;

    int a[4]={1,2,3,4};

   for(i=0 ; i<4 ;i++)
    {
      s=s+a[i];
    }

   printf("SUM=%d",s);
    return 0;
}

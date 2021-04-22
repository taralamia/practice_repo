#include<stdio.h>
int cubeNum(int n, int res);
int main()
{

    int n,res=1;
   printf("Enter a number to find its cube: ");
    scanf("%d",&n);

    printf("The Cube of Entered Number is %d",cubeNum(n,res));

 return 0;
}
int cubeNum(int n, int res)
{
    for(int i=1;i<=3;i++)
    {
        res=res*n;
    }
    return res;
}

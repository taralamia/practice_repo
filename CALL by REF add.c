#include<stdio.h>
int sumbyRef(int *a,int *b);
int main()
{
    int n1,n2;

    printf("Enter the values: ");
    scanf("%d%d",&n1,&n2);


    printf("SUM=%d",sumbyRef(&n1,&n2));

    return 0;
}
int sumbyRef(int *a,int *b)
{
    //int sum;

    //sum=*a+*b;

    return *a+*b;
}

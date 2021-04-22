#include<stdio.h>
int passingArray(int a,int *p_arra);
int main()
{
    int i,a=9;
    int arra[5]={3,4,5,0,2};

     passingArray(a,arra);
    for(i=0;i<5;i++)
    {
        printf("arra[%d]=%d\n",i,arra[i]);
    }
    return 0;

}
int passingArray(int a,int *p_arra)
{
    p_arra[2]=a;

    return 0;
}

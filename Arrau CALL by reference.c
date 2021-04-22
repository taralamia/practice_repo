#include<stdio.h>
void callbyRef(int *p,int *q);
int main()
{
    int a=9,b=0;
    printf("Before Swapping the values");

    callbyRef(&a,&b);

    printf("After Swapping the values\n %d and %d",a,b);

   return 0;

}
void callbyRef(int *p, int *q)
{
    int temp;
  temp=*p;
  *p=*q;
  *q=temp;
}

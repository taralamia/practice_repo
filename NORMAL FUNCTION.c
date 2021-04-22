#include<stdio.h>
void myfunc(int );
void myfunc2();
int main()
{
    int a=5;
    myfunc(a);
    printf("\nEnd of main");

return 0;
}
void myfunc(int n)
{
    printf("%d",n);
    myfunc2();
    printf("\nInside my function");
}
void myfunc2()
{
    printf("\nInside my function2");


}

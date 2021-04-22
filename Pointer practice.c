#include<stdio.h>
int main()
{
    int x=10;
    int *i=&x;

    printf("%d\n",&x);
    printf("%d\n",i);
    printf("%d\n", *i);
    printf("%d\n",&i);

 return 0;
}

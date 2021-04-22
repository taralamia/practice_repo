#include<stdio.h>
int main()
{
    int n,even,odd;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(!(n%2==0))
    {
        printf("Odd Number");
    }
    else
        printf("Even Number");
    return 0;

}

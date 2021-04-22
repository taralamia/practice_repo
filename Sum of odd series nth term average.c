#include<stdio.h>
int main()
{
    int i,n,term=1;
    float sum=0,aver;

    printf("Enter the nth term:");
    scanf("%d", &n);


    for(i=1; i<=n; i++)
    {

        sum=sum+term;
        term=term+2;
        aver=sum/n;
    }

     printf("The sum of the odd series is %.2f\n The average of the odd series id %.2f",sum,aver);



    return 0;
}

#include<stdio.h>
int main()
{

    int i,n1,n2,j,sum=0;
    printf("Enter the number: ");
    scanf("%d%d",&n1,&n2);
    j= (n1<n2)? n1 : n2;
    for(i=1;i<=j;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            printf("%d\t",i);
            sum=sum+i;
        }
    }
printf("\nSUM of the common factors= %d",sum);
    return 0;
}

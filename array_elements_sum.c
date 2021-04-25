#include<stdio.h>
int main()
{
    int size,i,sum=0;
    printf("Enter the size of any array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    printf("SUM=%d",sum);
 return 0;
}

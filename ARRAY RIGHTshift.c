#include<stdio.h>
int main()
{
    int i,n,temp;

printf("Enter the size of an Array: ");
    scanf("%d",&n);

    int a[n];
 printf("Enter the Elements of the array\n");
    for(i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

  temp=a[n-1];
    for(i=n-1; i>=0 ; i--)
    {

        a[i]=a[i-1];
    }
    a[0]=temp;
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

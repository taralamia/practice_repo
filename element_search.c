#include<stdio.h>
int main()
{

    int i,n,get=0,val;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("Enter the value to find in the array\n");
    scanf("%d",&val);
    for(i=0;i<n;i++)
        {
            if(a[i]==val)
            {
                get=1;
            }
        }
    if(get==1)
    {
        printf("Entered value is found");
    }
    else
        printf("Not Found");
    return 0;
}

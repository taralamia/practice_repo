#include<stdio.h>
int main()
{
    int i,size,pos,temp;
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to get swapped\n");
    scanf("%d",&pos);
    for(i=pos-1; i<size/2; i++)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }

printf("After two Elements got swapped\n");
for(i=0; i<size; i++)
{
    printf("%d:%d\n",i,a[i]);
}
return 0;
}

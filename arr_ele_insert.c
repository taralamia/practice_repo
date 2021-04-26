#include<stdio.h>
int main()
{
    int size,i,pos,val;
 printf("Enter the size of the Array\n");
 scanf("%d",&size);
 int a[size];
 printf("Enter the elements of the Array\n");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("Enter the desired position and value to get entered in the Array\n");
 scanf("%d%d",pos,val);
 for(i=n; i>=pos-1;i++)
 {
     a[i]=a[i-1];
 }   
a[pos-1]=val;
printf("After Insertion\n");
for(i=0;i<size+1;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}
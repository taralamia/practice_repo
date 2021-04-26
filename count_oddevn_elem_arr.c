#include<stdio.h>
int main()
{
    int size,i,count=0;
printf("Enter the size of the Array\n");
scanf("%d",&size);
int a[size];
printf("Enter the Elements of the Array\n");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}   
for(i=0;i<size;i++)
{
if(a[i]%2==0)
{
   count++;
} 
}
printf("Total EVEN elements of the Array=%d\n",count); 
printf("Total ODD elements of the Array=%d",size-count);
/*Different Approach
We can take other count variable to count odd elements 
then there will be an else condition/*
return 0;
}
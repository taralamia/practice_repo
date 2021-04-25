#include<stdio.h>
int sum_elements(int a[],int s_num,int n);
int main()
{
    int n,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("SUM=%d",sum_elements(a,0,n));
 return 0;
}
int sum_elements(int a[],int s_num,int n)
{
    if(s_num==n)
        return 0;
    else
    {
     return (a[s_num]+ sum_elements(a,s_num+1,n));
    }

}

#include<stdio.h>
int main()
{
    int n,i,max,m_index,s_max,s_index;
    printf("Enter the size of an Array\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the elements for the array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    m_index=0;
    for(i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
            m_index=i;
        }
    }
    printf("First Largest number=%d\nIndex no.=%d\n",max,m_index);
  for(i=m_index;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        b[i]=a[i];

    }
  s_max=b[0];
  s_index=0;
  for(i=0;i<n;i++)
  {
      if(s_max<b[i])
      {
          s_max=b[i];
          s_index=i;
      }
  }
printf("Second Largest Number=%d\nand Index no.=%d",s_max,s_index);

 return 0;
}

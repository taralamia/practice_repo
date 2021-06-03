#include<stdio.h>
int main()
{
    int i,j,row_a,col_a,row_b,col_b,flag=0;
 printf("Enter the row and column number for A matrix\n");
 scanf("%d%d",&row_a,&col_a);
 printf("Enter the row and column number for B matrix\n");
 scanf("%d%d",&row_b,&col_b);
 int a[row_a][col_a],b[row_b][col_b];
 printf("Enter the values for A matrix\n");
  for(i=0;i<row_a;i++)
  {
      for(j=0;j<col_a;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  printf("Enter the values for B matrix\n");
   for(i=0;i<row_b;i++)
  {
      for(j=0;j<col_b;j++)
      {
          scanf("%d",&b[i][j]);
      }
  }
  if(row_a==row_b && col_a==col_b)
  {
      for(i=0;i<row_a;i++)
      {
          for(j=0;j<col_a;j++)
          {
              if(a[i][j]!=b[i][j])
              {
                  flag=1;

              }
          }
      }
  }
if(flag==0)
{
    printf("Both Matrix are  Equal\n");
}
else
{
    printf("Both Matrix are not Equal\n");
}

   return 0;


}

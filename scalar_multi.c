#include<stdio.h>
int main()
{
    int row_a,col_a,i,j,n;

 printf("Enter the Row and Column for Matrix A\n");
 scanf("%d%d",&row_a,&col_a);
 printf("Enter the number for multiplication\n");
 scanf("%d",&n);
 printf("Enter the values for A Matrix\n");
 int a[row_a][col_a],c[row_a][col_a];
 for(i=0;i<row_a;i++)
 {
     for(j=0;j<col_a;j++)
     {
         scanf("%d",&a[i][j]);
     }
 }
  for(i=0;i<row_a;i++)
  {
      for(j=0;j<col_a;j++)
      {
          c[i][j]= n * a[i][j];
      }
  }
  printf("Resultant Matrix\n");
  for(i=0;i<row_a;i++)
  {
      for(j=0;j<col_a;j++)
      {
          printf("c[%d]\t",c[i][j]);
      }
      printf("\n");
  }

  return 0;
}

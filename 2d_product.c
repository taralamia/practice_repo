#include<stdio.h>
int main()
{
    int i,j,row_a,col_a,row_b,col_b,sum=0,k;
    printf("Enter the row and column number for A matrix\n");
    scanf("%d%d",&row_a,&col_a);
    printf("Enter the row and column number for B matrix\n");
    scanf("%d%d",&row_b,&col_b);
    int a[row_a][col_a],b[row_b][col_b],c[10][10];
    printf("Enter the values for A matrix\n");
    for(i=0;i<row_a;i++)
    {
        for(j=0;j<col_a;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  if(col_a==row_b)
  {
     printf("Enter the values for B matrix\n");

        for(i=0;i<row_b;i++)
    {
        for(j=0;j<col_b;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


    for(i=0;i<row_a;i++)
    {
        for(j=0;j<col_b;j++)
        {
          for(k=0;k<row_b;k++)
          {
              sum=sum+ a[i][k]* b[k][j];
          }
          c[i][j]=sum;
          sum=0;
        }

    }
    for(i=0;i<row_a;i++)
    {
        for(j=0;j<col_b;j++)
        {
            printf("c[%d]\t",c[i][j]);
        }
        printf("\n");
    }

  }

  else
  {
      printf("Conditions for product matrix is not fulfilled\n");

  }
return 0;
}

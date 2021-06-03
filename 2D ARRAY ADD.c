#include<stdio.h>
int main()
{
    int i,j,col,row;

 printf("Enter the row number for the first and second matrix: ");
 scanf("%d",&row);
 printf("\nEnter the column number for the first and second matrix: ");
 scanf("%d",&col);
    ///*If we want to ADD two matrix,then the row and column number
     ///*has to be equal for both of the matrix *///
  int A[row][col],B[row][col];
  int C[row][col];

    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
         printf("A[%d][%d]=",i,j);
         scanf("%d",&A[i][j]);
       }
       printf("\n");
    }

   for(i=0;i<row;i++)
   {
       for(j=0;j<col;j++)
       {
           printf("B[%d][%d]=",i,j);
           scanf("%d",&B[i][j]);
       }
       printf("\n");
   }

 for(i=0;i<row;i++)
 {
     for(j=0;j<col;j++)
     {
         C[i][j]=A[i][j]+B[i][j];
     }
 }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

            printf("C=[%d]\t",C[i][j]);
        }
        printf("\n");
    }

    return 0;

}

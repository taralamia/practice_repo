#include<stdio.h>
int main()
{
    int i,j,n,count;

 printf("Enter the size of an Array: ");
 scanf("%d",&n);
    int a[n],dup[n];

printf("Enter elements in array: ");

 for(i=0; i<n ; i++)
 {
     scanf("%d",&a[i]);
     dup[i]=-1;
 }

    for(i=0;i<n;i++)
    {
       count=1;

      for(j=i+1; j<n; j++)
      {
          if(a[i]==a[j])
          {
              count++;
              dup[j]=0;

          }
      }

    if(dup[i]!=0)
   {
         dup[i]=count;
   }
}

  printf("\nAll the Unique Elements\n");
       for(i=0; i<n ; i++)
       {
           if(dup[i]==1)
           {
               printf("%d\t",a[i]);
           }
       }

return 0;

    }




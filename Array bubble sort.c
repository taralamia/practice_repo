#include<stdio.h>
int main()
{

    int i,n,j,temp;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int sArr[n];
 printf("Enter the elements of the Array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&sArr[i]);
 }
  for(i=0;i<n-1;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(sArr[i]>sArr[j])
          {
              temp=sArr[i];
              sArr[i]=sArr[j];
              sArr[j]=temp;
          }
       }
  }
  printf("After sorting the Elements the new Array is\n");

  for(i=0;i<n;i++)
  {
      printf("%d\t",sArr[i]);
  }
    return 0;

}

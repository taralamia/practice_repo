#include<stdio.h>
int isPrimefactor(int k);
int main()
{
    int num;
    printf("Enter a Positive Number to check its Prime Facctors: ");
    scanf("%d", &num);

    isPrimefactor(num);
  return 0;
}
int isPrimefactor(int k)
{
    int i;

    for(i=2; k>1; i++)

    {
        while(k%i==0)
        {
            printf("%d\t",i);
            k=k/i;
        }
    }



}

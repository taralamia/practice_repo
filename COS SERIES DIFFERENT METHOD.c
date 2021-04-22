#include<stdio.h>
#include<math.h>
int main()               //1-x^2/2!+x^4/4!-x^6/6!+....
{

    int i,j,n;
    float sum=1,fac,x;


    printf("Enter the value of x and n: ");
    scanf("%f%d", &x,&n);

    for(i=1;i<=n;i++)

    {
        fac=1;
    for(j=2*i; j>=1; j--)

        {
            fac*=j;
        }

    if(i%2==0)

      {
          sum-=pow(x,2*i)/fac;
      }
    else
         {
             sum+=pow(x,2*i)/fac;
         }
    }

    printf("The sum of the series %.4f", sum);

    return 0;

}

#include <stdio.h>
int main()
{
int m=0,n,ne,i;
printf("Enter the value of n and ne: ");
scanf("%d%d", &n,&ne);

for(i = 1; i<=ne && n<=ne ; i++)
    {
        m += n;

        printf("%d X %d = %d\n",n,i,m);
        for(;i==10;)
        {
            i=0;
            m=0;
            n+=1;

            printf("\n");
        }

    }
return 0;
}

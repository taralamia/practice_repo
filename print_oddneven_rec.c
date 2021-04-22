#include<stdio.h>
int print_oddneven();
int main()
{
    int s_num,e_num;
 printf("Enter the Starting and Ending Number\n");
 scanf("%d%d",&s_num,&e_num);

 print_oddneven(s_num,e_num);

}
int print_oddneven(s_num,e_num)
{
    if(s_num<=e_num)
    {
        if(s_num%2==0)
       {
         printf("EVEN NUMBER= %d\n",s_num);
         print_oddneven(s_num+1,e_num);
       }
       else
       {
           printf("ODD NUMBER= %d\n",s_num);
           print_oddneven(s_num+1,e_num);
       }
    }

}

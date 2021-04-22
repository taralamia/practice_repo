#include<stdio.h>
int naturaaal_num(int s_num,int e_num);
int main()
{
    int s_num,e_num;
  printf("Enter the Starting and Ending Number\n");
  scanf("%d%d",&s_num,&e_num);

  naturaaal_num(s_num,e_num);
return 0;
}
int naturaaal_num(int s_num,int e_num)
{
    if(s_num<=e_num)
    {
      printf("%d\t",s_num);
      naturaaal_num(s_num+1,e_num);
    }
}

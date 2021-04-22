#include<stdio.h>
#include<stdint.h>
int main()
{

  char chs,che;
  int as_chs,as_che,ch=0;

  printf("Enter the range: ");
  scanf("%c%c",&chs,&che);

  as_chs=(int)chs;

  as_che=(int)che;


  for(ch=as_chs; ch<=as_che; ch++)
  {
      printf("%c\n", (char)ch);

  }


    return 0;
}

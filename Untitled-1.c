#include <stdio.h>
int main()
{int n,m;
  printf("Input n,m\n");
  scanf("%d%d",&n,&m);
  int x=0;
  for(int i=2;i<=n;i++)
  {x=(x+m)%i;}
  printf("%d\n",x+1);
  printf("nothing\n");//这一行就是练习git的，无意义
    printf("again");
  return 0;
}//相当nb的代码，数学逆推，也可用数组，这个更简单

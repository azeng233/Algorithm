#include <stdio.h>
int main(){
  int a,b,r;
  scanf("%d %d",&a,&b);
  int m = a,n = b;
  do {
    r = a % b;
    a = b;
    b = r;
  }while(r != 0);
  printf("最大公约数为:%d",a);
  printf("最大公倍数为：%d",m*n/a);
  return 0;
}


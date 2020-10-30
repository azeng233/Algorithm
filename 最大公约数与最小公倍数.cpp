#include <stdio.h>
 
void f(int &m,int &n){   //最小公倍数
   if(m < n){
    int c = m;
    m = n;
    n = c;
  }
  int k = 0;
  for(int i = m;i > 0;i++)
    if(i % m == 0 && i % n == 0){
       k = i;
       break;
    }
  printf("最小公倍数为:%d\n",k);
} 

void p(int m,int n){   //最大公约数
  if(m < n){
    int c = m;
    m = n;
    n = c;
  }
  int r = m % n;
  while(r != 0){
    m = n;
    n = r;
    r = m % n;
  }
  printf("最大公约数为:%d",n);
}

int main(){
  int m,n;
  printf("请输入要比较的两个数:");
  scanf("%d %d",&m,&n);
  f(m,n);
  p(m,n);
  return 0;
}
=======
#include <stdio.h>
 
void f(int &m,int &n){   //最小公倍数
   if(m < n){
    int c = m;
    m = n;
    n = c;
  }
  int k = 0;
  for(int i = m;i > 0;i++)
    if(i % m == 0 && i % n == 0){
       k = i;
       break;
    }
  printf("最小公倍数为:%d\n",k);
} 

void p(int m,int n){   //最大公约数
  if(m < n){
    int c = m;
    m = n;
    n = c;
  }
  int r = m % n;
  while(r != 0){
    m = n;
    n = r;
    r = m % n;
  }
  printf("最大公约数为:%d",n);
}

int main(){
  int m,n;
  printf("请输入要比较的两个数:");
  scanf("%d %d",&m,&n);
  f(m,n);
  p(m,n);
  return 0;
}

#include <stdio.h>

int year2,month2,day2;   //设置为全局变量以便在函数中调用这两个参数
int cnt = 0;

int isPrime(int year) {
  if((year%4==0 &&year%100!=0) || year%400==0)
    return 1;
}

void f(int &year,int &month,int &day){
  switch(month){
		case 1:
		case 3:
		case 5:
                case 7:
		case 8:
		case 10: if(day > 31){
			month ++;
			day = 1;
		}
		break;
		case 2: if(isPrime(year)){
			if(day > 29){
				month ++;
				day = 1;
			}
		}
			else{
				if(day >28){
					month ++;
					day = 1;
				}
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11: if(day > 30){
				month ++;
				day = 1;
			}
			break;
		case 12: if(day > 31){
				year ++;
				month = 1;
				day = 1;
			}
			break;
	}
}

int f1(int year,int month,int day){
   if(year == year2 && month == month2 && day == day2)
      return 0;
    else{
      day++;
      cnt++;
      f(year,month,day);   //进行日期的进制，详细的代码可以看一下此时此刻的下一秒
      f1(year,month,day);  //反复调用f1()函数来进行进位
    }
}

int main(){
  int year1,month1,day1;
  printf("请分别输入两个日期:\n");
  scanf("%d-%d-%d",&year1,&month1,&day1);
  scanf("%d-%d-%d",&year2,&month2,&day2);
  f1(year1,month1,day1);
  printf("从%d-%d-%d到%d-%d-%d之间共有%d天。",year1,month1,day1,year2,month2,day2,cnt);
  return 0;
}


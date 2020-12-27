#include <stdio.h>

int year,month,day,hour,minute,second;

int isPrime(int year){
  if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			return 1;
}

void p(int &day,int &month,int &year){
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

void inputDate(){
	scanf("%d-%d-%d %d:%d:%d",&year,&month,&day,&hour,&minute,&second);
	second += 1;
}

int main(){
	inputDate();
	printf("此时此刻的下一秒是:");
	// second += 1;
	if(second >= 60){
		minute ++;
		second = 0;
		  if(minute >= 60){
				hour ++;
                                minute = 0;
				  if(hour >= 24){
						day ++;
						hour = 0;
						p(day,month,year);
					}
			}
	}
	printf("%02d-%02d-%02d %02d:%02d:%02d",year,month,day,hour,minute,second);  
	return 0;
} 


#include<stdio.h>

int isPrime(int year) {
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
void f(int &days, int &months, int &year) {
	switch(months) {
		case 1: 
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if(days >= 31) {
				months += 1;
				days = 1;
			}
			break;
		case 2:	if(isPrime) {
					if(days > 29) {
						months += 1;
						days = 1;
					}
//					else {
//						days += 1;
//					}
				}
				else {
					if(days >= 28) {
						months += 1;
						days = 1;
					}
				}
				break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(days >= 30) {
				months += 1;
				days = 1;
			}
			break;
		case 12:
			if(days >= 31) {
				months = 1;
				year += 1;
				days = 1;
			}
			break;
	}
}
int main()
{
	int years,months,days,hours,minutes,seconds;
	scanf("%d-%d-%d %d:%d:%d",&years,&months,&days,&hours,&minutes,&seconds);
	//应该保证输入的值符合实际，可以对输入的数据进行判断,但在这个
	//课题中不是研究重点，故先省略
	
	seconds += 1;
	if(seconds >= 60) {
		minutes += 1;
		seconds = 0;
		if(minutes >= 60) {
			hours += 1;
			minutes = 0;
			if(hours >= 24) {
				days += 1;
				hours = 0;
				f(days, months, years);
			}
		}
	} 
	printf("%d-%02d-%02d %02d:%02d:%02d",years,months,days,hours,minutes,seconds);
	
	return 0;
}

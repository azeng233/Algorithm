#include<stdio.h>
int isPrime(int year) {
	return ((year%4==0 && year%100!=0) || year%400==0);
} 
int year2,month2,day2;
int cnt = 0;

void f1(int &year, int &month, int &day) {
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if(day > 31) {
				month += 1;
				day = 1;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(day > 30) {
				month += 1;
				day = 1;
			}
			break;
		case 2: if( isPrime(year) ) {
					if(day > 29) {
						month += 1;
						day = 1;
					}
				}
				else {
					if(day > 28) {
						month += 1;
						day = 1;
					}
				}
				break;
		case 12: if(day > 31) {
					month = 1;
					day = 1;
					year += 1;	
				}
				break;
	}
}
int f(int year1, int month1, int day1) {
	if(year1==year2 && month1==month2 && day1==day2) {
		
		return 0;
	}
	else {
		day1 += 1;
		cnt++;
		f1(year1, month1, day1); 
		f(year1, month1,day1);
	}
}
int main()
{
	int year1,month1,day1;
	printf("请输入两个日期，第一个日期在第二个日期之前:\n");
	scanf("%d-%d-%d",&year1,&month1,&day1);
	scanf("%d-%d-%d",&year2,&month2,&day2);
	f(year1, month1, day1);
	printf("%d-%d-%d 到 %d-%d-%d 之间一共有 %d 天",year1,month1,day1,year2,month2,day2,cnt);
	return 0;
}

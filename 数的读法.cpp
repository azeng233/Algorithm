#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
string convert(ll num,bool _flag=true){
	string a;
	switch(num){
		case 1:a+="一 ";break;
		case 2:a+="二 ";break;
		case 3:a+="三 ";break;
		case 4:a+="四 ";break;
		case 5:a+="五 ";break;
		case 6:a+="六 ";break;
		case 7:a+="七 ";break;
		case 8:a+="八 ";break;
		case 9:a+="九 ";break;
		default:
			if(num==0)
				break;
			ll n=0,num1=num;
			while(num1!=0)
			{
				n++;
				num1/=10;
			}
			bool flag=(num%(ll)pow(10,n-1))>pow(10,n-2)?true:false;
			if(num%(ll)pow(10,n-1) == 0)
				flag=true;
			if(num/100000000!=0)
				a+=convert(num/100000000,false)+"亿 " + (!flag?"零 ":"") +convert(num%100000000);
			else if(num/10000!=0)
				a+=convert(num/10000,false)+"万 " + (!flag?"零 ":"") +convert(num%10000);
			else if(num/1000!=0)
				a+=convert(num/1000)+"千 "+(!flag?"零 ":"")+convert(num%1000);
			else if(num/100!=0)
				a+=convert(num/100)+"百 "+(!flag?"零 ":"")+convert(num%100);
			else if(num/10!=0)
				if(num/10==1)
					a+=(_flag?"一 110101011十 ":"十 ")+ (num%10==0?"":convert(num%10));
				else
					a+=convert(num/10)+"十 "+convert(num%10);
	}
	return a;
}
int main()
{
	ll num;
	cin>>num;
	cout<<convert(num)<<endl;
	return 0;
}

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
string convert(ll num,bool _flag=true){
	string a;
	switch(num){
		case 1:a+="һ ";break;
		case 2:a+="�� ";break;
		case 3:a+="�� ";break;
		case 4:a+="�� ";break;
		case 5:a+="�� ";break;
		case 6:a+="�� ";break;
		case 7:a+="�� ";break;
		case 8:a+="�� ";break;
		case 9:a+="�� ";break;
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
				a+=convert(num/100000000,false)+"�� " + (!flag?"�� ":"") +convert(num%100000000);
			else if(num/10000!=0)
				a+=convert(num/10000,false)+"�� " + (!flag?"�� ":"") +convert(num%10000);
			else if(num/1000!=0)
				a+=convert(num/1000)+"ǧ "+(!flag?"�� ":"")+convert(num%1000);
			else if(num/100!=0)
				a+=convert(num/100)+"�� "+(!flag?"�� ":"")+convert(num%100);
			else if(num/10!=0)
				if(num/10==1)
					a+=(_flag?"һ 110101011ʮ ":"ʮ ")+ (num%10==0?"":convert(num%10));
				else
					a+=convert(num/10)+"ʮ "+convert(num%10);
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

#include <stdio.h>
#include <string.h>

void reverse(char *a, int n) {
	if(a[n-1] != '0') {
		printf("%c",a[n-1]);
	}
	for(int i = n-2; i>=0; i--) {
		printf("%c",a[i]);
	}
}
int main()
{
	char a[1000],b[1000],c[1001];
	gets(a);
	gets(b);
	int n = strlen(a) / sizeof(a[0]);
	int m = strlen(b) / sizeof(b[0]);
	puts(a);
	puts(b);
	printf("n = %d,m = %d\n",n,m);
	int i = 0;
	int z = 0;
	while(n > 0 && m > 0) {
		int sum = a[--n]-'0' + b[--m]-'0' + z;
		if( sum >= 10) {
			c[i++] = sum % 10 + '0';
			z = sum / 10;
		}
		else {
			c[i++] = sum+'0';
			z = 0;
		}
	}
	while(n > 0) {
		int sum = a[--n]-'0' + z;
		if( sum >= 10) {
			c[i++] = sum % 10 + '0';
			z = sum / 10;
		}
		else {
			c[i++] = sum+'0';
			z = 0;
		}
	}
	while(m > 0) {
		int sum = b[--m]-'0' + z;
		if( sum >= 10) {
			c[i++] = sum % 10 + '0';
			z = sum / 10;
		}
		else {
			c[i++] = sum+'0';
			z = 0;
		}
	}
	c[i] = z + '0';
	printf("两数相加的值为：\n");
	reverse(c,(strlen(c) / sizeof(c[0])));
	printf("\nc[] = ");
	puts(c);
	return 0;
}

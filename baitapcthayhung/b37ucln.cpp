#include <stdio.h>

int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long long c;
	while(b!=0){
		c = a%b;
		a = b;
		b = c;
	}
	printf("%lld",a);
}

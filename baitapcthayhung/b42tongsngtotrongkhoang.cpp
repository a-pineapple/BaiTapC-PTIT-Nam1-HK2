#include <stdio.h>
#include<math.h>
#include<conio.h>

long long ktra(long long a){
	if(a <= 1){
		return 0;
	}
	for(long long i = 2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
main(){
	long long a,b,t;
	long long s = 0;
	scanf("%lld%lld",&a,&b);
	if(a>b){
		t = a;
		a = b;
		b = t;
	}
	for(long long i = a; i<=b; i++){
		if(ktra(i)==1){
			s = s + i;
		}
	}
	printf("%lld",s);
}

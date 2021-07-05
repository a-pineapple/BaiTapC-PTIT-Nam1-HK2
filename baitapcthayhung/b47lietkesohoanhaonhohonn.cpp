#include<stdio.h>
#include<math.h>

int  ktshh(long long n){
	long long s = 1;
	for(long long i = 2; i < sqrt(n);i++){
		if(n%i==0){
			s = s +i + n/i;
		}
	}
	long long a = sqrt(n);
	if( n == a*a){
		s = s +a;
	}
	if(s==n){
		return 1;
	}
	return 0;
}
main(){
	long long a,b,t;
	scanf("%lld%lld",&a,&b);
	if(a>b){
		t = a;
		a = b;
		b = t;
	}
	for(long long i = a ;i<=b;i++){
		if(ktshh(i)==1){
			printf("%lld ",i);
		}
	}
	
}

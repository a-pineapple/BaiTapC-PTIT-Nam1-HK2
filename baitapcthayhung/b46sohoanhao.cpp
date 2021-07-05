#include<stdio.h>
#include<math.h>

int  tonguoc(long long n){
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
	long long n;
	scanf("%lld",&n);
	printf("%lld",tonguoc(n));
	
}

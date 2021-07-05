#include<stdio.h>

long long gt(long long n){
	long long s =1;
	for(long long i = 1; i<=n;i++){
		s = s*i;
	}
	return s;
}
long long gt2(long long n){
	if(n==0){
		return 1 ;
	}

	return n * gt(n-1) ;
}
main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld",gt(n));
	return 0;
	
}

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
	long long n;
	long long s = 0;
	scanf("%lld",&n);
	for(long long i = 1; i<n; i++){
		if(ktra(i)==1){
			s = s + i;
		}
	}
	printf("%lld",s);
}

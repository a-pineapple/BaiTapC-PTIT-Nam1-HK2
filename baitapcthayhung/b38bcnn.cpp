#include <stdio.h>

int main(){
	long long a;
	scanf("%lld",&a);
	if(n <= 1){
		printf("0")
	}
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0){
			printf("0");
			return 0;
		}
	}
	printf("1");
}

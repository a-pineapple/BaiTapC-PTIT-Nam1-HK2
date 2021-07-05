#include <stdio.h>
#include<math.h>

int main(){
	long long a;
	scanf("%lld",&a);
	if(a <= 1){
		printf("0");
		return 0;
	}
	for(int i = 2;i<=sqrt(a);i++){
		if(a%i==0){
			printf("0");
			return 0;
		}
	}
	printf("1");
}

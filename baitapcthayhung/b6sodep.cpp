#include<stdio.h>
#include<math.h>


int kttn(long long n){
	int du;
	long long N = n;
	long long s = 0;
	while (n > 0){
		du = n%10;
		s = s*10 + du;
		n = n/10;
	}
	if (s != N){
		return 0;
	}
	return 1;
}
int s(long long n){
	int du;
	int s = 0;
	while (n > 0){
		du = n%10;
		s = s + du;
		n = n/10;
	}
	if ( s % 10 == 0){
		return 1;
	}
	return 0;
}
int main(){
		int n;
		scanf("%d", &n);
		int x = 0;
		long long a = pow(10,n-1), b = pow(10,n);
		for (long long i = a; i<b;i++){
			if(kttn(i)==1&&s(i)==1){
				x++;
			}
		}
		printf("%d",x);
	
}

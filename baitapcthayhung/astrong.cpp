#include<stdio.h>
#include<math.h>

int ptich(long long n){
	long long du;
	long long N = n;
	long long M = n;
	long long s=0,x=0;
	while(n!=0){
		du= n%10;
		n = n/10;
		x++;
	}
	
	while(N!=0){
		du= N%10;
		s = s + pow(du,x);
		N = N/10;
	}
	if(s==M){
		printf("%lld ",M);
	}
		
}
int main(){
	long long n;
	scanf("%lld",&n);
	for(long long i=1;i<n;i++){
		ptich(i);
	}
}

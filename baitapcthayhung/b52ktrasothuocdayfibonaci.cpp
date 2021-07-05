#include<stdio.h>

int ktra(int n){
	int f0=0,f1=1,fn=2;
	while(){
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	if(fn==n){
		return 1;
	}
	return 0;
	
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",ktra(n));
}

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int du, x = 0;
	while(n!=0){
		du  = n%10;
		n/=10;
		x++;
	}
	printf("%d",x);
}

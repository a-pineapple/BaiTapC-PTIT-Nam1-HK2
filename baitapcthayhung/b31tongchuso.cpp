#include<stdio.h>

int main(){
	int n; 
	scanf("%d",&n);
	int du, s=0;
	while(n!=0){
		du = n%10;
		s = s+du;
		n/=10;
	}
	printf("%d",s);
}

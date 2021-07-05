#include<stdio.h>

int main(){
	int n; 
	scanf("%d",&n);
	int N = n;
	int du, s=0;
	while(n!=0){
		du = n%10;
		s = s*10+du;
		n/=10;
	}
	if(s==N)
	printf("1");
	else 
	printf("0");
}

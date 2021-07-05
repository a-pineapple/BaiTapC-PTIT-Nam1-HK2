#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int du, x = 0, t;
	while(n!=0){
		du  = n%10;
		n/=10;
		x++;
		if(x==1)
			t = du;	
	}
	printf("%d %d",du,t);
}

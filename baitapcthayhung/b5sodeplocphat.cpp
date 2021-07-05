#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int du;
	int k=1;
	while(n>0){
		du = n%10;
		if(du != 8&&du != 6 && du != 0){
			k=0;
			printf("0");
			return 0;
		}
		n=n/10;
	}
	if(k=1)
	printf("1");
}

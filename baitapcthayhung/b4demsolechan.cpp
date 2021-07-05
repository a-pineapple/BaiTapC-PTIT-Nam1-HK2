#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int dem1 =0;
	int dem2=0;
	int du;
	while(n>0){
		du = n%10;
		if(du % 2 ==0){
			dem2++;
		}
		else
			dem1++;
		n = n/10;	
	}
	printf("%d %d",dem1,dem2);
}

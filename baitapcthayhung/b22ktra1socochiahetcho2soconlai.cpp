#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(b==0||c==0){
		printf("0");
		return 0;
	}
	if(a%b==0&&a%c==0)
		printf("1");
	else
		printf("0");
}

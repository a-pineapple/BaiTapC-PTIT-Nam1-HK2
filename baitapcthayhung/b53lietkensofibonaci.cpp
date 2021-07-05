#include<stdio.h>

int main(){
	int f1=0,f2=1,fn;
	int n;
	scanf("%d",&n);
	printf("%d %d ",f1,f2);
	for(int i = 1;i<=n-2;i++){
		fn=f1+f2;
		f1=f2;
		f2=fn;
		printf("%d ",fn);
	}
}

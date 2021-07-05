#include<stdio.h>

int main(){
	int n,m, x;
	scanf("%d%d",&n,&m);
	for(int i = 1;i<=n;i++){
		x = i;
		for(int j = 1;j<=m;j++){
			printf("%d",x++);
		}
		printf("\n");
	}
}

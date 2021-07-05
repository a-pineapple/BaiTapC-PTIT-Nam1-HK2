#include<stdio.h>

int main(){
	int n,m, x=1;
	scanf("%d%d",&n,&m);
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			printf("%d",x);
		}
		x++;
		printf("\n");
	}
}

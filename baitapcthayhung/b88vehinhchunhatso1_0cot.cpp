#include<stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			if(j%2==0){
				printf("1");
			}
			else
				printf("0");
		}
		printf("\n");
	}
}

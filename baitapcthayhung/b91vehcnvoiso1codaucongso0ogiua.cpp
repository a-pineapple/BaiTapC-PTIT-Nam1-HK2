#include<stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			if(n%2==0&&m%2==0){
				if(i==(n/2)||i==(n/2)+1||j==(m/2)||j==(m/2)+1){
					printf("0");
				}
				else
					printf("1");
			}
			if(n%2==0&&m%2==1){
				if(i==(n/2)+1||i==(n/2)||j==(m/2)+1){
					printf("0");
				}
				else
					printf("1");
			}
			if(n%2==1&&m%2==0){
				if(i==(n/2)+1||j==(m/2)||j==(m/2)+1){
					printf("0");
				}
				else
					printf("1");
			}
			if(n%2==1&&m%2==1){
				if(i==(n/2)+1||j==(m/2)+1){
					printf("0");
				}
				else
					printf("1");
			}
			
	}
		printf("\n");
	}
}

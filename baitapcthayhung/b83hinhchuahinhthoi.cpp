#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int m=n;
	for(int i = 0;i<2*n-1; i++){
		if(i<n&&i!=1){
			m++;
		}
		else{
			m--;
		}
		for(int j =0; j<2*n; j++){
			if(i==0||i==2*n-1){
				printf("*");
			}
			else{
				if(i<n){
					if(j>=n-i&&j<=m){
						printf("~");
				}
					else
						printf("*");
				}
				else
					if(j>i-n+1&&j<=m){
						printf("~");
					}
					else
						printf("*");
			}
		}
				
		printf("\n");
	}
}

#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	int  n = b;
	for(int i = 1 ;i <=a;i++){
		for(int j = 1;j<=a+b-1;j++){
			if(j<i){
				printf("~");
			}
			else
				if(j<=n){
					if(i==j||j==n||i==1||i==a){
						printf("*");
					}
					else 
						printf(".");
				}
		}
		n++;
		printf("\n");
	}
}

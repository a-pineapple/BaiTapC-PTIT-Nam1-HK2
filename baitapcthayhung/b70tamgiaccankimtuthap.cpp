#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a = n;
	for(int i = 1; i<=n ;i++){
		for(int j = 1; j<=2*n-1; j++){
			if(j<= n-i){
				printf("~");
			}
			else
					if(n-i+1 <= j && j <= n +i-1)
					printf("*");
				
		}
		printf("\n");
	}
}

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int m = n-1, v=0;
	for(int i = 1;i<=2*n-1;i++){
		if(i<=n){
			m++;
		}
		else
		
			m--;
		for(int j=1; j<=m; j++){
			if(i==1||i==2*n-1){
				printf("*");
			}
			else{
				if(j<=v){
					printf("~");
				}
				else
					printf("*");	
			}
				
		}
		printf("\n");
		if(i<n){
			v= v+2;
		}
		else
			v= v-2;
	}
}

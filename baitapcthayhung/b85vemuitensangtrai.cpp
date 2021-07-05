#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int m = n, v= 2*n+1;
	for(int i =1; i<=2*n-1; i++){
		if(i<=n){
			m--;
			v=v-2;
		}
		else{
			m++;
			v=v+2;
		}
		for(int j=1;j<=v;j++){
			if(j<=m){
				printf("~");
			}
			else
				printf("*");
		}
		printf("\n");
		
	}
}

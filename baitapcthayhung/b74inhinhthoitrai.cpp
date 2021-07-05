#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int m = 1;

		for(int i = 1; i <=2*n-1;i++){
			if(i<=n){
				for(int j=1; j<=n;j++){
					if(j<=n-i)
						printf("~");
					else
						printf("*");
				}
				printf("\n");
			}
			
			if(i>n){
				for(int j= 1;j<=n;j++){
					if(j<=i-n)
						printf("~");
					else
						printf("*");
				}
				printf("\n");
			}
			}
				
			
		
	
}

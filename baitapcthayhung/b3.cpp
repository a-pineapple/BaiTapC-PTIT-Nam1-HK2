#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
		for(int i = 1 ; i <= n ; i++){
			int x=1;
			int y=i;
			for(int j = 1; j <= n ; j++){
				if(j>=i){
					printf("%d ",x++);
				}
				else 	
					printf("%d ",y--);
			}
			printf("\n");
		}
}

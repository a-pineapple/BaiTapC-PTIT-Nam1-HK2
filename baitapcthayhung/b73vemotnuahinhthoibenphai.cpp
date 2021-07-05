#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int m = 1;

		for(int i = 1; i <=2*n;i++){
			for(int j=1; j<=m;j++){
				printf("*");
			}
			if(i<n)
					m++;
				else
					m--;
			printf("\n");
		}
	
}

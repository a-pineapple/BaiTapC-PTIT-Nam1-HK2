#include<stdio.h>

int main(){
	int n,m, x;
	scanf("%d%d",&n,&m);
	int a = n;
	if(m>n){
		a = m;
	}
	for(int i = 1;i<=n;i++){
		x = a;
		for(int j = 1;j<=m;j++){
			if(j<i){
				printf("%d",x--);
			}
			else
				printf("%d",x);
		}
		
		printf("\n");
	}
}

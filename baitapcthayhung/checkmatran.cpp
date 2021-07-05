#include<stdio.h>

int main(){
	int a[10][10], m, n;
	scanf("%d%d", &m,&n);
	
	for(int i = 0 ;i <m;i++ )
		for(int i = 0;i< n ;i++)
			printf("%d",i);
	
}

#include<stdio.h>
int main(){
	int a,b,t,x,n,m;
	scanf("%d%d",&a,&b);
	n=a;
	m=b;
	if(b>a){
		n = b;
		m = a;
	}
	for(int i = 0;i<a;i++){
		x = n+1;
		for(int j = 0 ;j<b;j++){
			if(j<a-i){
				x--;
				printf("%d",x);
			}
			else 
				printf("%d",x);
		}
		printf("\n");
	}
}

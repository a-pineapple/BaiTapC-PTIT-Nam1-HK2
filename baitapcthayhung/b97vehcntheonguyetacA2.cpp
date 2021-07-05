#include<stdio.h>
int main(){
	int a,b,t,x,n,m;
	scanf("%d%d",&a,&b);
	n=a;
	m=b;
	if(b>a){
		n = b;
		m=a;
	}
	for(int i = 0; i<a;i++){
		if(i<=b) x = n-i;
		else x = n-m;
		for(int j = 0; j<b;j++){
				if(j<=b-1-i){
					printf("%d",x);
				}
				else{
					x++;
					printf("%d",x);
				}
			
		}
		printf("\n");
	}
}

#include<stdio.h>
int main(){
	int a, b, x;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		if(i<=b){
			x = i;
		}
		else
			x = b;
			for(int j=1;j<=b;j++){
				if(x<b){
					printf("%d",x);
					x++;
				}
				else{
					printf("%d",x);
				}	
			}
		printf("\n");
	}
}

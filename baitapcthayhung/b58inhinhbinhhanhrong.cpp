#include <stdio.h>
#include <math.h>
int main ()
{
	int a;
	scanf("%d",&a);
	for(int i = 1 ;i<=a;i++){
		for(int j=1;j<=2*a-1;j++){
			if(j <= a-i){
				printf("~");
			}
			else{
				if((2*a-i+1)<=j){
						printf(" ");
				
				}
				else{
					if((2*a-i)==j||j==a-i+1||i==1||i==a){
					printf("*");
					}
					else 
						printf(".");
				}
				}
					
				
		}
		printf("\n");
		}
	
}

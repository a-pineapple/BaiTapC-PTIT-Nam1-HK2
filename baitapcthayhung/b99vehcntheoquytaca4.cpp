#include<stdio.h>
int main(){
	int a,b,t,x,n,m,k=2,p;
	scanf("%d%d",&a,&b);
	n=a;
	m=b;
	if(b>a){
		n = b;
		m = a;
	}

		for(int i = 0 ;i<a;i++){
			if(i<=a-b){
					x = n - m +1;
						for(int j = 0; j<b; j++){
							printf("%d",x++);
					}
					printf("\n");
				}
			else {
				if(a<b&&i==0) x = n - m +1;
				else {
				x = n - m + k;
				k++;
				}
				for(int j = 0; j<b; j++){
						p=i-(a-b);
						if(j<=p&&j<b){
							printf("%d",x);
							p++;
						}
						if(j>p&&j<b){
							x++;
							printf("%d",x);
						}
					}
					printf("\n");
				}
				
			}
			
		
}

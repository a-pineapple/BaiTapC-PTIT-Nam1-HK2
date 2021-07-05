#include<stdio.h>
#define max 100
int main(){
	int n, a[max], x=0, y=0;
	scanf("%d",&n);
	for(int i = 0 ;i<n; i++){
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i<n ;i++){
		if(a[i] % 2==0){
			x++;
		}
		else
			y++;
	}
	
	printf("%d %d",x,y);
}

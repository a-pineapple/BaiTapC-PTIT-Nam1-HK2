#include<stdio.h>
#define max 100
int main(){
	int n, a[max], m;
	scanf("%d",&n);
	for(int i = 1;i<=n; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(int i = 1; i<=n ;i++){
		if(i>=m){
			a[i] = a[i+1];
		}
	}
	for(int i = 1; i<=n-1 ;i++){
		printf("%d ",a[i]);
	}
}

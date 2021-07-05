#include<stdio.h>
#define max 100
int main(){
	int n, a[max], m, k=1;
	scanf("%d",&n);
	for(int i = 1;i<=n; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1; i<=n ;i++){
		for(int j =i; j>0;j--){
			if(a[i]==a[j-1]){
				break;
			}
			if(j == 1){
				printf("%d ",a[i]);
			}
		}
	}
}

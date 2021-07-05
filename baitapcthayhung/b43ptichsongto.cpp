#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	int N = n, a[n];
	for(int i = 0 ;i <=	N;i++){
		a[i]=0;
	}
	for(int i = 2; i<=sqrt(N);i++){
		if(n%i == 0){
			a[i]=i;
			while(n%i == 0 ){
				n = n/i;
		}
		}
	}
	if(n!=1){
		a[n]=n;
	}
	for(int i = 0;i<=N;i++){
		if(a[i]!=0){
			printf("%d ",i);
		}
	}
	
}

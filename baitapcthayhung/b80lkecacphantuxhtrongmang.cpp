#include<stdio.h>
int main(){
	int n,k=0;
	int a[100000];
	int b[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<100;i++)
		 b[i]=0;
	for(int i=0;i<n;i++){
		if(b[i]==0){
			b[i]=1;
			for(int j = i+1 ; j<n;j++){
				if(a[j]==a[i]){
					b[i]++;
					b[j]=-1;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]==1){
			k=1;
			break;
		}
		if(b[i]!=1){
			k=0;
		}
	}
	if(k==1){
		for(int i=0;i<n;i++){
		if(b[i]==1){
			printf("%d ", a[i]);
		}
		}
	}
	else
		printf("0");
		
}

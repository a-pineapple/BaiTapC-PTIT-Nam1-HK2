#include<stdio.h>
int main(){
	int n,m,x=1,y=1;
	scanf("%d",&n);
	int a[n+1];
	
	for(int i=1 ;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	int b[m+1];
	for(int i = 1 ;i <=m;i++){
		b[i]=a[i];
	}
	for(int i = 1;i<=n;i++){
		a[i]=a[m+x];
		x++;
		if(i>n-m){
			a[i]=b[y++];
		}
	}
	for(int i = 1;i<=n;i++){
		printf("%d ",a[i]);
	}
}

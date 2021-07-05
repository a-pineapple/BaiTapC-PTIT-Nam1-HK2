#include<stdio.h>
int main(){
	int n, m,x;
	scanf ("%d%d",&n,&m);
	int a[n+1],b[n+1],c[m+n+1];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0; i<m;i++){
		scanf("%d",&b[i]);
	}
	scanf("%d",&x);
	for(int i = 0 ;i<m+n;i++){
		if(i<x){
			c[i]=a[i];
		}
		else
			if(i<m+x){
				c[i]=b[i-(x)];
			}
			else
				c[i]=a[x++];
	}
	for(int i = 0;i<m+n;i++){
		printf("%d ",c[i]);
	}
}

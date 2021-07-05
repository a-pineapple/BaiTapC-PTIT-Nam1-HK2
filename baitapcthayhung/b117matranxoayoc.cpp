#include<stdio.h>
int main(){
	int a[100][100];
	int n, d=0,x=1,h,c;
	scanf("%d",&n);
	h = n - 1;
	c = n - 1;
	while(d<=n/2){
		for(int i = d ; i<=c; i++){
			a[d][i]=x++;	
		}
		for(int i = d+1; i<=h; i++){
			a[i][h]=x++;
		}
		for(int i = c-1;i>=d;i--){
			a[h][i]=x++;
		}
		for(int i = h-1; i>d;i--){
			a[i][d]=x++;
		}
		d++;
		h--;
		c--;
	}
	for(int i = 0;i<n;i++){
		for(int j = 0 ; j<n ;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		
	
}

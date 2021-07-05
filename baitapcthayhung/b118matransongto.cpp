#include<stdio.h>
#include<math.h>
int ktk (long long k)
{
	int i;
	for (i=2;i<=sqrt(k);i++)
	{
		if (k%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main(){
	int n ;
	long long b[100000], x=0;
	scanf("%d",&n);
	for(long long i = 2;i<=1000009;i++){
		if(ktk(i)==1){
			b[x++]=i;
		}
	}
//	for(int i = 0; i<x;i++){
//		printf("%d " ,a[i]);
//	}
	int a[100][100];
	int  d=0,y=0,h,c;
	h = n - 1;
	c = n - 1;
	
	while(d<=n/2){
		for(int i = d ; i<=c; i++){
			a[d][i]=b[y++];	
		}
		for(int i = d+1; i<=h; i++){
			a[i][h]=b[y++];
		}
		for(int i = c-1;i>=d;i--){
			a[h][i]=b[y++];
		}
		for(int i = h-1; i>d;i--){
			a[i][d]=b[y++];
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

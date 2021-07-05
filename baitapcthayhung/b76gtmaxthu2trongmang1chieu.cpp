#include<stdio.h>
#define max 100
int main(){
	int n, a[max];
	scanf("%d",&n);
	for(int i = 0 ;i<n; i++){
		scanf("%d",&a[i]);
	}
	int gtmax = 0, gtmin=a[0];
	for(int i = 0; i<n ;i++){
		if(a[i] > gtmax){
			gtmax = a[i];
		}
	}
	for(int i = 0; i<n ;i++){
		if(a[i]>gtmin && a[i]<gtmax){
			gtmin = a[i];
		}
	}
	printf("%d",gtmin);
}

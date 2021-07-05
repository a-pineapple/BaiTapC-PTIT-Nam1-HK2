#include<stdio.h>
#include<math.h>

int gt(int n){
	int s =1;
	if(n==0){
		return 1;
	}
	for(int i= 1;i<=n;i++){
		s = s*i;
	}
	return s;
}
int tach(int n){
	int du;
	int N=n;
	int sum = 0;
	while(n!=0){
		du = n%10;
		sum = sum+gt(du);
		n = n/10;
	}
	if(sum==N){
		return 1;
	}
	return 0;
}
int main(){
	int a,b,t;
	scanf("%d%d",&a,&b);
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	for(int i = a;i<=b;i++){
		if(tach(i)==1){
			printf("%d ",i);
		}
	}
	
	
}

#include<stdio.h>

int main(){
	int a,b,t;
	int s = 0;
	scanf("%d%d",&a,&b);
	if(a>b){
		t = a;
		a = b;
		b = t;
	}
	for(int i = a; i <= b ; i++){
		s = s + i;
	}
	printf("%d",s);
	
	
}

#include<stdio.h>
#include<string.h>
int a[100];
void tach(int n){
	int du;
	int i=0;
	while(n!=0){
		du = n%10;
		n=n/10;
		a[i]=du+48;
		i++;
	}
}

int main(){
	int n, x=0;
	int b[10]={0};
	scanf("%d",&n);
	tach(n);
	while(a[x]==48){
		x++;
	}
	for(int j = x;j<strlen(a);j++){
		b[a[j]-48]++;
	}
	for(int j=0;j<=9;j++){
		if(b[j]!=0){
			printf("%d %d\n",j,b[j]);
		}
	}
	
	
}
	


#include<stdio.h>
#include<string.h>

int main(){
	char a[1000000];
	int b[10]={0}, x=0;
	scanf("%s",a);
	while(a[x]==48){
		x++;
	}
	if(a[x]=='.'||a[x]==','){
		x=0;
	}
	for(int i = x;i<strlen(a);i++){
		b[a[i]-48]++;
	}
	for(int i=0;i<=9;i++){
		if(b[i]!=0){
			printf("%d %d\n",i,b[i]);
		}
	}
	
	
}

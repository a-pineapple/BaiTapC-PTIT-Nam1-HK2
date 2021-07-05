#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	char b[100];
	scanf("%s",a);
	int t = strlen(a)-1;
	while(a[t]=='0'){
		t--;
	}
	for(int i = 0; i <= t; i++){
		b[i]=a[i];
	}
	for(int i = strlen(b)-1; i >= 0; i--){
		printf("%c",b[i]);
	}
}

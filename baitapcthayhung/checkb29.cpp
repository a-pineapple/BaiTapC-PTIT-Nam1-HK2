#include<stdio.h>
#include<string.h>

int main(){
	char n[100];
	scanf("%s",n);
	int t = strlen(n);
	printf("%c %c",n[0],n[t-1]);
}

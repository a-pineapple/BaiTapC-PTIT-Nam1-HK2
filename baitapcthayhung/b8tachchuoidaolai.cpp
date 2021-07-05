#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	gets(a);
	char s[100];
	strrev(a);
	for (int i=i;i<strlen(a);i++){
		s[i] = a[i];
	}
	for (int i=0; i<strlen(s);i++){
		printf("%c ",s[i]);
	}
}

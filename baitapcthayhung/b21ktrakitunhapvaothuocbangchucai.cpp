#include<stdio.h>
#include<string.h>

int main(){
	char a[1];
	scanf("%s",a);
	if('a'<=a[0]&&a[0]<='z'||'A'<=a[0]&&a[0]<='Z')
		printf("1");
	else
		printf("0");
}

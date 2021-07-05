#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int x=0;
	gets(a);
	for(int i = 0 ;i<strlen(a);i++){
		if(a[i]!=' '&&a[i-1]==' ')
		{
			x++;
		}
	}
	printf("%d",x+1);
}

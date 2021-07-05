#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int c=0,s=0,k=0;
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a'&&a[i]<='z'||a[i]<='Z'&&a[i]>='A'){
			c++;
		}
		else
			if(a[i]>='0'&&a[i]<='9'){
				s++;
			}
			else
				k++;
	}
	printf("%d %d %d",c,s,k);
}

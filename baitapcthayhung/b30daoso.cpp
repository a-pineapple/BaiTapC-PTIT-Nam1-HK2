#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	scanf("%s",a);
	int i = strlen(a)-1;
	int t;
	if(a[i]=='0'){
		t = a[0];
		a[0]=a[i];
		a[i]=t;
		for(int j = 1;j<= i;j++)
			printf("%c",a[j]);
		
	}
	else 
		t = a[0];
		a[0]=a[i];
		a[i]=t;
		for(int j = 0;j <= i;j++){
			printf("%c",a[j]);
		}		
}

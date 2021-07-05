#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char a[100];
	scanf("%s",&a)
	
	for(int i=0 ; ; i++){
		scanf("%s",a[i]);
	}
	int dem1=0;
	int dem2=0;
	for(int i=0; i< 10 ;i++){
		if((a[i]-'0')% 2 == 0){
			dem1++;
		}
		else
			dem2++;
	}
	printf("%d %d", dem1, dem2);
}
	

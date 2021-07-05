#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	gets(a);
	int dem1 = 0;
	int dem2 = 0;
	int dem3 = 0;
	for (int i = 0 ; i< strlen(a); i++){
		if((65 <= a[i] && a[i]<=90) || (97 <= a[i] && a[i] <= 122)){
			dem1++;
		}
		else 
			if( 48 <= a[i] && a[i] <= 57){
				dem2++;
			}
			else 
				dem3++;
	}
	printf("%d %d %d ", dem2,dem1,dem3);
	
}

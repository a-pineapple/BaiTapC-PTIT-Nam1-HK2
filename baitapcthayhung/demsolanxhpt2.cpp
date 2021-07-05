#include<stdio.h>
#include<string.h>

int main(){
	char n[100000];
	int b[1000];
	scanf("%s",n);
	for(int i = 0;i<10;i++){
		b[i]=0;
	}
	for(int i = 0;i<strlen(n);i++){
		b[n[i]-48]++;
		
	}
	for(int i = 0 ;i<strlen(n);i++){
		int kt = 0;
		for(int j = 0; j < i; j++) {
			if(n[i] == n[j]) {
				kt = 1;
				break;
			}
		}
		if(kt == 0) {
			printf("%c %d\n", n[i], b[n[i] - 48]);
		}
	}
	
//	long long a;
//	scanf("%lld", &a);
//	int b[20];
//	for(int  i = 0; i < 10; i++) {
//		b[i] = 0;
//	}
//	while(a != 0) {
//		b[a % 10]++;
//		a /= 10;
//	}
//	for(int  i = 0; i < 10; i++) {
//		if(b[i] != 0) {
//			printf("%d %d\n", i, b[i]);
//		}
//	}
}
	


#include<stdio.h>
int main(){
	int a, nam, tuan, ngay;
	scanf("%d", &a);
	nam = a/365;
	tuan = (a%365)/7;
	ngay = (a%365)%7;
	printf("%d %d %d", nam, tuan, ngay);
}
	

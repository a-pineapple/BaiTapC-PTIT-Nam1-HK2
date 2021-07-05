#include<stdio.h>
#include<math.h>

int main(){
	int a, b;
	int s, h, t,du;
	float thuong;
	scanf("%d%d", &a, &b);
	if(b==0){
		printf("0");
		return 0;
	}
	else 
		s = a+b;
		h = a-b;
		t = a*b;
		thuong = (float) a/b;
		du = a%b;
		printf("%d %d %d %.2f %d", s,h,t,thuong,du);
		return 0;
}

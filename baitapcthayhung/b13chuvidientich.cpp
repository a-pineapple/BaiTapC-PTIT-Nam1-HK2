#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	int s,p;
	scanf("%d%d", &a, &b);
	if(a <= 0 || b <= 0){
		printf("0");
		return 0;
	}
	else
		s = a*b;
		p = 2*(a+b);
		printf("%d %d", p, s);
}

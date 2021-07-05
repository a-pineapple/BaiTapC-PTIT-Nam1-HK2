#include<stdio.h>
#include<math.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==0&&b!=0){
		printf("VN");
	}
	else{
		if(a==0&&b==0){
			printf("VSN");
		}
		else{
			float c = (float) -b/a;
			printf("%.2f",c);
		}
	}	
		
		
}

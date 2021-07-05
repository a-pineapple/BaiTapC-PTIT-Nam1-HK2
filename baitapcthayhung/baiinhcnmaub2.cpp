#include<stdio.h>

main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);

	for(long long i = a;i>=1;i--){
		long long x = i;
		for(long long j = b;j>=1;j--){
			if(i>3)
				printf("%lld",b);
			else 
				{	
					if(x<=b){
						printf("%lld",x++);
					}
					else 
						printf("%lld",b);
				}
				
		}
		
		printf("\n");
	}
	
}

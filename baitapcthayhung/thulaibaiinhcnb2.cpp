#include<stdio.h>
#include<math.h>
main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
		for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if( (i+(b-a))>=j )	
			printf("%d",a-i+j);
			else
			printf("%d",b);
		    }
		printf("\n");
	    }
	
}


#include<stdio.h>
#include<string.h>
main(){
	char kq[100][100];
	int dem=0,x=0,max=0,a;
	char s[100];
	gets(s);
	for(int i = 0;i<strlen(s);i++){
		if(s[i]<='Z'&&s[i]>='A'){
			s[i]=s[i]+32;
		}
	}

	char *p=strtok(s," ");
	while(p!=NULL){
		strcpy(kq[dem],p);
		dem++;
		p=strtok(NULL," "); 
	}
	for (int i = 0;i<dem-1;i++){
		x =1;
		for(int j = i+1;j<dem;j++){
			if(strcmp(kq[i],kq[j])==0){
				x++;
			}
		}
		if(x>max){
			a =i;
			max =x;
		}
	
	}
	printf("%s %d",kq[a],max);
	
/*	for (int i=0;i<dem;i++){
		printf("%s ",kq[i]);
	}
	*/
}

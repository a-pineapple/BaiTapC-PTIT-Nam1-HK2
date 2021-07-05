#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	char kq[100][100];
	int dem = 0;
	gets(s);
	strlwr(s);
	char *p=strtok(s," ");
	while(p!=NULL){
		strcpy(kq[dem],p);
		dem++;
		p=strtok(NULL," ");
	}
	
	printf("%s",kq[dem-1]);
	for(int i = 0 ; i<dem-1;i++){
		printf("%c",kq[i][0]);
	}
	printf("@ptit.edu.vn");
		
	
}

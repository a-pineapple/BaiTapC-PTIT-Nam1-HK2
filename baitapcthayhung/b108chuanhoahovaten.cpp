#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	char kq[100][100];
	int dem = 0;
	gets(s);
	strlwr(s);
	for(int i = 1;i<strlen(s);i++){
		if(s[i-1]==' '&&s[i]!=' '){
			s[i]=s[i]-32;
		}
	}
	char *p=strtok(s," ");
	while(p!=NULL){
		strcpy(kq[dem],p);
		dem++;
		p=strtok(NULL," ");
	}
	strupr(kq[0]);
	for(int i = 1 ;i <dem-1;i++){
		printf("%s ",kq[i]);
	}
	printf("%s, ",kq[dem-1]);
	printf("%s",kq[0]);
	
}
	
	


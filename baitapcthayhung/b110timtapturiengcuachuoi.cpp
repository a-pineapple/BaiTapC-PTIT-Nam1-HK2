#include<stdio.h>
#include<string.h>
#define max 1000

void tok(char s[],char kq[][max], int &dem){
	dem= 0;
	char *p=strtok(s," ");
	while(p!=NULL){
		strcpy(kq[dem],p);
		dem++;
		p=strtok(NULL," ");
	}
}
int main(){
	char a[1000], b[1000] , kq1[max][max], kq2[max][max];
	int x =0,dem1,dem2;
	gets(a);
	gets(b);
	int c[1000];
	tok(a,kq1,dem1);
	tok(b,kq2,dem2);
	for(int i = 0;i<dem1;i++){
		c[i]=0;
	}
	for(int i = 0; i<dem1;i++){
		if(c[i]==0){
			c[i]=1;
			for(int j = i+1;j<dem1;j++){
				if(strcmp(kq1[i],kq1[j])==0){
					c[j]=-1;
				}
			}
		}
	}	
	for(int i = 0 ;i<dem1;i++){
		x = 0;
		if(c[i]!=-1){
			for(int j = 0 ;j<dem2;j++){
				if(strcmp(kq1[i],kq2[j])==0){
					x = 1;
					break;
				}
			}
			if(x==0){
				printf("%s ",kq1[i]);
			}
		}
	}
}

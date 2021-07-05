#include<stdio.h>
#include<string.h>
#include<conio.h>
#define max 100
struct cnhan{
	int ma;
	char ten[25];
	float sonc, luongn, luongt;
	
};
void add(cnhan c[], int &n){
	static int id;
	scanf("%d",&id);
	c[n].ma=id;
	id++;
	fflush(stdin);
	printf("Ma:%d\n",c[n].ma);
	printf("Nhap ten cong nhan\n");
	gets(c[n].ten);
	printf("Nhap so ngay cong cong nhan\n");
	scanf("%f", &c[n].sonc);
	printf("Nhap luong ngay cong nhan\n");
	scanf("%f", &c[n].luongn);
	if(c[n].sonc > 24){
		c[n].luongt = c[n].sonc*c[n].luongn + (c[n].sonc*c[n].luongn)*0.2;
		printf("Luong thang cong nhan:%f\n", c[n].luongt);
	}
	else
		{
		c[n].luongt = c[n].sonc*c[n].luongn;
		printf("Luong thang cong nhan:%f\n", c[n].luongt);
		}
	n++;
}
void deletecn(cnhan c[],int &n, int madel){
	int i;
	for(i=0;i<n;i++){
		if(c[i].ma==madel){
			break;
		}
	}
	for(int j = i+1;j<n;j++){
		c[j-1]=c[j];
	}
	n--;
}
void insert(cnhan c[], int &n, int machen){
	int i;
	for(i = 0;i<n;i++){
		if(c[i].ma==machen){
			break;
		}
	}
	n++;
	for(int j=n;j>=i+1;j--){
		c[j]=c[j-1];
	}
	scanf("%d",&c[i].ma);
	printf("Ma:%d\n",c[i].ma);
	printf("Nhap ten cong nhan\n");
	gets(c[i].ten);
	gets(c[i].ten);
	printf("Nhap so ngay cong cong nhan\n");
	scanf("%f", &c[i].sonc);
	printf("Nhap luong ngay cong nhan\n");
	scanf("%f", &c[i].luongn);
	if(c[n].sonc > 24){
		c[n].luongt = c[n].sonc*c[n].luongn + (c[n].sonc*c[n].luongn)*0.2;
		printf("Luong thang cong nhan:%f\n", c[n].luongt);
	}
	else
		{
		c[n].luongt = c[n].sonc*c[n].luongn;
		printf("Luong thang cong nhan:%f\n", c[n].luongt);
		}
}
void tachten(char hoten[],char ten[]){
	for(int i=strlen(hoten)-1;i>=0;i--){
		if(hoten[i]==' '){
			strcpy(ten,hoten+1+i);
			break;
		}
	}
}
void tachdem(char hoten[],char dem[]){
	int x = 0;
	for(int i=strlen(hoten)-1;i>=0;i--){
		if(hoten[i]==' '){
			x++;
		}
		if(x==3){
			strcpy(dem,hoten+1+i);
			break;
		}
	}
}
void sapxep(cnhan c[],int &n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			char ten1[255]="",ten2[255]="", dem1[255]="",dem2[255]="";
			tachten(c[i].ten,ten1);
			tachten(c[j].ten,ten2);
			int check1=strcmp(ten1,ten2);
			if(check1>0){
				cnhan t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
			else{
				 if(check1==0){
					tachdem(c[i].ten,dem1);
					tachdem(c[j].ten,dem2);
					int check2=strcmp(dem1,dem2);
					if(check2>0){
						cnhan t=c[i];
						c[i]=c[j];
						c[j]=t;
					}
					else{
						int check3=strcmp(c[i].ten,c[j].ten);
						if(check3>0){
							cnhan t=c[i];
							c[i]=c[j];
							c[j]=t;
						}
					}
				}
	
			}
		}
	}
}
void printlist(cnhan c[], int &n){
	
	for(int i = 0;i<n;i++){
		printf("%d %s %f %f %f\n",c[i].ma,c[i].ten,c[i].sonc,c[i].luongn,c[i].luongt);
	}
}
void rich(cnhan c[], int &n){
	for(int i =0;i<n;i++){
		if(c[i].luongt>=5000000){
			printf("%d %s %f %f %f\n",c[i].ma,c[i].ten,c[i].sonc,c[i].luongn,c[i].luongt);
		}
	}
}
void one(cnhan c[], int &n, int main){
	
	for(int i = 0;i<n;i++){
		if(c[i].ma==main){
			printf("%d %s %f %f %f\n",c[i].ma,c[i].ten,c[i].sonc,c[i].luongn,c[i].luongt);
			break;
		}
	}
}
int main(){
	struct cnhan c[max];
	int lc,n=0;
	
	do{
		printf( "_______CONG NHAN_______\n");
		printf( "0. Exit\n");
		printf(  "1. Add\n");
		printf(  "2. Delete\n");
		printf(  "3. Insert\n");
		printf(  "4. Printlist\n");
		printf(  "5. Rich\n");
		printf(  "6. One\n");
		printf( "Ban chon: ");
		scanf("%d",&lc);
		switch(lc){
			case 0:
				printf("Bye!\n");
				break;
			case 1:
				add(c, n);
				break;
			case 2:
				int madel;
				printf( "Nhap ma Cn can xoa: ");
				scanf("%d",&madel);
				deletecn(c, n, madel);	
				break;
			case 3:
				int machen;
				printf("Nhap ma Cn can chen: ");
				scanf("%d",&machen);
				insert(c,  n,  machen);
				break;
			case 4:
				sapxep(c,n);
				printlist(c, n);
				break;
			case 5:
				rich(c, n);
				break;
			case 6:
				int main;
				scanf("%d",&main);
				one(c, n,  main);
				break;
		}
	}
	while(lc!=0);
}



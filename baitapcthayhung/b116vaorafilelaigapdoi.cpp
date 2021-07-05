#include<stdio.h>
struct sp{
	char ten[100];
	int id;
	float gn,gx;

} a[1001];
int n = 0, z=1;
void read(){
	FILE *f=fopen("b17dccn456.bin","rb");
	sp t;
	while(fread(&t,sizeof(sp),1,f)){
		a[n++]=t;
	}
	fclose(f);
}
void write(){
	FILE *f=fopen("b17dccn456.bin","wb");
	sp t ;
	for(int i = 0;i<n;i++){
		t = a[i];
		fwrite(&t,sizeof(sp),1,f);
	}
	fclose(f);
}
bool check(sp &a){
	if((a.gx - a.gn)>a.gn){
		return 1;
	}
	return 0;
}

int main(){
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:{
			scanf("%d",&n);
			for(int i = 0;i<n;i++){
				a[i].id=z++;
				gets(a[i].ten);
				gets(a[i].ten);
				scanf("%f%f",&a[i].gn,&a[i].gx);
			}
			printf("%d",n);
			write();
			break;
		}
		case 2:{
			read();
			int ma;
			scanf("%d",&ma);
			for(int i = 0 ;i <n;i++){
				if(a[i].id==ma){
					gets(a[i].ten);
					gets(a[i].ten);
					scanf("%f%f",&a[i].gn,&a[i].gx);
				}
			}
			printf("%d",ma);
			write();
			break;
		}
		case 3:{
			read();
			for(int i = 0 ;i<n;i++){
				if(check(a[i]) ==1){
					printf("%d %s %.2f %.2f\n", a[i].id, a[i].ten, a[i].gn, a[i].gx);
				}
			}
			break;
		}
	}
}

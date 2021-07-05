#include<stdio.h>
#include<string.h>
int n = 0,  z = 1 ;
struct sv{
	char ten[100];
	int id;
	float dA,dB,dC;
}a[1001];
void docfile(){
	FILE *f = fopen("B17DCCN456.bin","rb");
	sv t;
	while(fread(&t,sizeof(sv),1,f)){
		a[n] = t;
		n++;
	}
	fclose(f);
}
void ghifile(){
	FILE *f = fopen("B17DCCN456.bin","wb");
	sv t ;
	for(int i = 0;i<n;i++){
		t = a[i];
		fwrite(&t,sizeof(sv),1,f);
	}
	fclose(f);
}
void doi(sv &a, sv&b){
	sv t ;
	t = a;
	a = b ;
	b = t;
	
}
int main(){
	int choice ;
	scanf("%d",&choice);
	switch(choice){
		case 1 : {
			docfile();
			scanf("%d",&n);
			for(int i = 0; i<n ;i++){
				a[i].id=z;
				z++;
				gets(a[i].ten);
				gets(a[i].ten);
				scanf("%f%f%f",&a[i].dA,&a[i].dB,&a[i].dC);
			}
			printf("%d",n);
			ghifile();
			break;
		}
		case 2: {
			docfile();
			int ma;
			scanf("%d",&ma);
			for(int i = 0;i<n ;i++){
				if(a[i].id==ma){
					gets(a[i].ten);
					gets(a[i].ten);
					scanf("%f%f%f",&a[i].dA,&a[i].dB,&a[i].dC);
				}
			}
			printf("%d",ma);
			ghifile();
			break;
		}
		case 3:{
			docfile();
			for(int i = 0 ;i<n;i++){
				for(int j = i+1 ;j<n;j++){
					if((a[i].dA+a[i].dB+a[i].dC) > (a[j].dA+a[j].dB+a[j].dC)){
						doi(a[i],a[j]);
					}
			}
			}
			for(int i = 0;i<n;i++){	
				printf("%d %s %.1f %.1f %.1f\n",a[i].id,a[i].ten,a[i].dA,a[i].dB,a[i].dC);
			}
		}
			break;
		
		
	}

}

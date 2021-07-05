#include<stdio.h>
int main(){
	FILE *f = fopen("1.txt", "r");
	char s[100];
//	fscanf(f, "%s",s);
	fgets(s,30,f);
	printf("%s",s);
	// fprintf(f,"%s",s);
	fclose(f);
}

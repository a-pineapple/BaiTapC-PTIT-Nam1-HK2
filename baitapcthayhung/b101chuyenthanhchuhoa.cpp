#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[100];
	gets(a);
	for(int i = 0 ; i<=strlen(a); i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);
	
}

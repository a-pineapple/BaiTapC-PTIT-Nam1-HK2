#include <stdio.h>
#include <string.h>

struct sv {
	char ten[100];
	int id;
	float diemA, diemB, diemC;
};
sv a[10001];

int z = 1, n = 0;

void docFile() {
	FILE *f = fopen("B17DCCN456.bin", "rb");
	sv tmp;
	while(fread(&tmp, sizeof(sv), 1, f)) {
		a[n] = tmp;
		n++;
	}
	fclose(f);
}

void ghiFile() {
	FILE *f = fopen("B17DCCN456.bin", "wb");
	for(int i = 0; i < n; i++) {
		sv tmp = a[i];
		fwrite(&tmp, sizeof(sv), 1, f);
	}
	fclose(f);
}
bool check(sv x) {
    if(x.diemA < x.diemB && x.diemB < x.diemC) {
        return 1;
    }
    return 0;
}

main() {
	int choice;
	scanf("%d", &choice);
	switch(choice) {
		case 1 : {
			docFile();
			scanf("%d", &n);
			for(int i = 0; i < n; i++) {
				a[i].id = z;
				z++;
				gets(a[i].ten);
				gets(a[i].ten);
				scanf("%f%f%f", &a[i].diemA, &a[i].diemB, &a[i].diemC);
			}
			printf("%d", n);
			ghiFile();
			break;
		}
		case 2 : {
			docFile();
			int t;
			scanf("%d", &t);
			for(int i = 0; i < n; i++) {
				if(a[i].id == t) {
					gets(a[i].ten);
					gets(a[i].ten);
					scanf("%f%f%f", &a[i].diemA, &a[i].diemB, &a[i].diemC);
					break;
				}
			}
			printf("%d", t);
			ghiFile();
			break;
		}
		case 3 : {
			docFile();
			for(int i = 0; i < n; i++) {
				if(a[i].diemA < a[i].diemB && a[i].diemB < a[i].diemC) {
					printf("%d %s %.1f %.1f %.1f\n", a[i].id, a[i].ten, a[i].diemA, a[i].diemB, a[i].diemC);
				}
			}
			break;
		}
	}
}

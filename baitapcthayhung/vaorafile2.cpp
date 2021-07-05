#include <stdio.h>
#include <string.h>
 
struct sv {
    int id;
    char name[100];
    float a_score, b_score, c_score; 
} a[10001];
 
int z = 1, n = 0;
 
void readBin() {
    FILE *f;
    f = fopen("B17DCCN456.bin","rb");
    sv tmp;
    while(fread(&tmp, sizeof(sv), 1, f)) {
        a[n++] = tmp;
    }
    fclose(f);
}
 
void writeBin() {
    FILE *f;
    f = fopen("B17DCCN456.bin","wb");
    for(int i = 0; i < n; i++) {
        sv tmp = a[i];
        fwrite(&tmp, sizeof(sv), 1, f);
    }
    fclose(f);
}
 
void swap(sv &x, sv &y) {
    sv tmp = x;
    x = y;
    y = tmp;
}
 
bool check(sv x) {
    if(x.a_score < x.b_score && x.b_score < x.c_score) {
        return 1;
    }
    return 0;
}
 
main() {
    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case 1 : {
            readBin();
            scanf("%d", &n);
            for(int i = 0; i < n; i++) {
                a[i].id = z++;
                fflush(stdin);
                gets(a[i].name);
                scanf("%f%f%f", &a[i].a_score, &a[i].b_score, &a[i].c_score);
            }
            printf("%d", n);
            writeBin();
            break;
        }
        case 2 : {
            readBin();
            int tmp;
            scanf("%d", &tmp);
            for(int i = 0; i < n; i++) {
                if(a[i].id == tmp) {
                    fflush(stdin);
                    gets(a[i].name);
                    scanf("%f%f%f", &a[i].a_score, &a[i].b_score, &a[i].c_score);
                    break;
                }
            }
            printf("%d", tmp);
            writeBin();
            break;
        }
        case 3 : {
            readBin();
            for(int i = 0; i < n; i++) {
                if(check(a[i]))printf("%d %s %.1f %.1f %.1f\n", a[i].id, a[i].name, a[i].a_score, a[i].b_score, a[i].c_score);
            }
            break;
        }
    }
}

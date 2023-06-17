#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    int tambah = 0;
    int kurang = 0;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    tambah = a + b;
    if(a >= b){
        kurang = a - b;
    }else{
        kurang = b - a;
    }
    printf("%d\n%d", tambah, kurang);

    return 0;
}

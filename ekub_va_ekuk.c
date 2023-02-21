#include <stdio.h>

int EKUB(int a, int b){
    int i=1, h=a/b, w=0;
    while(i<=a && i<=b){
        if(a%i==0 && b%i==0) w=i;
        ++i;
    }
    return w;
}

int EKUK(int a, int b){
    int q=EKUB(a, b);
    return a*b/q;
}

void main(){
    printf("EKUK = %d\n", EKUK(18, 7));
    printf("EKUB = %d\n", EKUB(18, 7));
}
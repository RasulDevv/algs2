#include <stdio.h>

long int degree(int n, int d){
    if(n==1 || d==0) return 1;
    if(n==0) return 0;
    return n*degree(n, d-1);
}

void main(){
    printf("%ld", degree(4, 3));
}
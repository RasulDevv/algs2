#include <stdio.h>
#include <stdlib.h>

long int factorial(x){
    if(x<0) return 0;
    if(x==0) return 1;
    return x*factorial(x-1);
}

void main(){
    printf("%ld", factorial(4));
}
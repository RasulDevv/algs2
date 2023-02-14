#include <stdio.h>
#include <stdlib.h>

long int fact(int x){
    int y=1, i=1;
    if(x==0) return 1;
    else if(x<0) return 0;
    else{
        start:
        y = y*i;
        i++;
        if(i<=x) goto start;
        return y;
    }
}

long int factorial(int x){
    if(x<0) return 0;
    if(x==0) return 1;
    return x*factorial(x-1);
}

void main(){
    printf("%ld", fact(5));
}
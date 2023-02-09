#include <stdio.h>
#include <stdlib.h>

// k-tartibli fibonacci sonini topib beruvchi funksiya
void fib1(int k){
    int n1=0, n2=1, x;
    for(int i=0; i<k-2; i++){
        x=n2;
        n2=n1+n2;
        n1=x;
    }
    printf("The %dth fibonacci number: %d\n", k, n2);
}

// siz kiritgan a son fibonacci sonimi yoki fibonacci soni emasmi??? 
void fib2(int a){ // Shu savolga funksiya javob beradi.
    int n1=0, n2=1, x, n3=0;
    for(int i=0; i<=n2; i++){
        x=n2;
        n2=n1+n2;
        n1=x;
        if(n2==a){
            n3=1;
            break;
        }
    }
    if(n3==1){
        printf("%d is fibonacci number.", a);
    }
    else if(n3==0){
        printf("%d is not fibonacci number.", a);
    }
}

void main(){
    // fib1(10);
    // fib2(10946);
}
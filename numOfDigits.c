#include <stdio.h>

// n sonning necha honali ekanligini aniqlaydigan funksiya.
int numOfDigits(int n){
    int count=0;
    while (n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int main(){
    int a = 5972;
    printf("%d son %d xonali.", a, numOfDigits(a));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// siz kiritgan a son fibonacci sonimi yoki fibonacci soni emasmi??? 
void fib1(int a){ // Shu savolga funksiya javob beradi.
	int n1=0, n2=1, x, q=0;
	for(int i=0; i<=n2; i++){
		x=n2;
		n2=n1+n2;
		if(n2==a || n1==a){
			q++;
			break;
		}
		n1=x;
	}
	if(q==1) printf("True");
	if(q==0) printf("False");
}

void fib2(int k){ // k-tartibli fibonacci sonini topib beruvchi funksiya
	int n1=0, n2=1, x, i=0, q;
	if(k==1){
		printf("The %dth fibonacci number is %d.", k, n1);
	}
	else if(k>1 && k!=1){
		do{
			x=n2;
			n2=n1+n2;
			n1=x;
			i++;	
		} while (i<k-2);
		printf("The %dth fibonacci number is %d.", k, n2);
	}
	else if(k<1){
		printf("You entered the wrong number");
	}
}

void main(){
	// fib1((int)144);
	// fib2((int)9);
}
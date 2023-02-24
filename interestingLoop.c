#include <stdio.h>

void func1(){ // great and interesting loop
	int i=0;
	start:
	i++;
	printf("%d ", i);
	switch(i){
		case 100: break;
		default: goto start;
	}
}

void interesting_loop(){
    int i=0;
    A:if(i<=20){
        printf("%d  ", i);
        i=i+1;
        goto A;
    }
}

int main(){
    func1();
    return 0;
}
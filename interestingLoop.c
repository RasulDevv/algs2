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

int main(){
    func1();
    return 0;
}
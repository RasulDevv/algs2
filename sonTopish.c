#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int MIN = 1;
    int MAX = 10;
    int a, urinishlar=0, randomSon;
    srand(time(0));
    randomSon = (rand() % MAX) + MIN;
    printf("Men %d dan %d gacha son o'yladim. Topishga harakat qiling.\n", MIN, MAX);
    do{
        printf("son: "); scanf("%d", &a);
        if(a < randomSon){
            printf("Men o'ylagan son %d dan katta.\n", a);
        }
        else if(a > randomSon){
            printf("Men o'ylagan son %d dan kichik.\n", a);
        }
        urinishlar++;
    }while(a != randomSon);
    printf("Siz %d ta taxmin bilan topdingiz.", urinishlar);
    return 0;
}
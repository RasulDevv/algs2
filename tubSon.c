#include <stdio.h>
#include <stdlib.h>

void scanf_1(){
    int son1,son2=0; printf("son kiriting: "); scanf("%d", &son1);
    for(int i=1; i<=son1; i++){
        if(son1%i==0){
            son2=son2+1;
        }
    }
    if(son2==2 && son1>1){
        printf("%d tub son.", son1);
    }else if(son2>2){
        printf("%d tub son emas.", son1);
    }
}

void scanf_2(){
    int son1,son2=0,i=1; printf("son kiriting: "); scanf("%d", &son1);
    while(i<=son1){
        if(son1%i==0){
            son2=son2+1;
        }
        i=i+1;
    }
    if(son2==2 && son1>1){
        printf("%d tub son.", son1);
    }else{
        printf("%d tub son emas.", son1);
    }
}

void massiv(){
    int son[]={1,2,3,4,5,6,7,8,9,0,-1,-3,13,19};
    // printf("natija: %d\n", son[10]);
    printf("Tub sonlar: ");
    for(int i=0; i<=sizeof(son)/sizeof(son[0])-1; i++){
        int nn1=0;
        for(int j=1; j<=son[i]; j++){
            if(son[i]%j==0){
                nn1+=1;
            }
        }
        if(nn1==2){
            printf("%d  ", son[i]);
        }
        nn1=0;
    }
}

int main(){
    // scanf_1();
    // scanf_2();
    // massiv();
    return 0;
}
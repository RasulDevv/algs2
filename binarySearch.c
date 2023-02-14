#include <stdio.h>

void binarySearch(int x, int arr[], int low, int high){
    int middle=low+(high-low)/2, count=0;
    while(low<=high){
        count++;
        if(arr[middle]==x) break;
        else if(x>arr[middle]){
            low=middle+1;
            middle=(low+high)/2;
        }
        else{
            high=middle-1;
            middle=(low+high)/2;
        }
    }
    printf("index: %d\ncount: %d\n", middle+1, count);
}

int main(){
    int arr[] = {2,3,5,7,11,13,17,19,23,29,31,37,39,41,43,47};
    int low=0, high=sizeof(arr)/sizeof(arr[0])-1;
    binarySearch((int)13, arr, low, high);
    return 0;
}
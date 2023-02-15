#include <stdio.h>
#include <stdlib.h>

void binary_search(int x, int arr[], int low, int high){
    int middle=(low+high)/2, count=0;
    while(low<=high){
        count++;
        if(arr[middle]==x){
            break;
        }
        else if(x>arr[middle]){
            low=middle+1;
            middle=(low+high)/2;
        }
        else{
            high=middle-1;
            middle=(low+high)/2;
        }
    }
    if(arr[middle]==x)
        printf("interative binary search\nindex: %d\ncount: %d\n\n", middle, count);
    else if(arr[middle]!=x)
        printf("Not Found\n");
}

void recursive_binary_Search(int x, int arr[], int low, int high, int count){
    if(high>=low){
        int middle=(low+high)/2;
        if(x==arr[middle]){
            printf("recursive binary search\nindex: %d\ncount: %d\n", middle, count+1);
        }
        else if(x>arr[middle]){
            recursive_binary_Search(x, arr, middle+1, high, count+1);
        }
        else{
            recursive_binary_Search(x, arr, low, middle-1, count+1);
        }
    }
    else printf("Not Found\n");
}

int main(){
    int arr[] = {2,3,5,7,11,13,17,19,23,29,31,37,39,41,43,47};
    int low=0, high=sizeof(arr)/sizeof(arr[0])-1, count=0;
    binary_search(46, arr, low, high);
    recursive_binary_Search(46, arr, low, high, count);
    return 0;
}
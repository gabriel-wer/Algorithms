#include <stdio.h>

int search(int *h, int lo, int hi, int n){
    while(lo < hi){
        int mi = (lo+hi)/2; //get middle point
        printf("hi = %d\nmi = %d\nlo = %d\n\n", hi, mi, lo);
        if (mi == n) { 
            return 1; 
        }else if(n > mi){
           lo = mi+1;
        }else{
            hi = mi;
        }
    }
    return -1; //not found
}

int main(void){
    int arr[10];
    for(int x = 0; x <= 10; x++){
        arr[x] = x;
    }
    int arr_sz = sizeof(arr) / sizeof(int);
    search(arr, 0, arr_sz, 0);
    return 0;
}

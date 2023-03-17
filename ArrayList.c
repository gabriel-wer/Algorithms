#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define arrayLength(array) (sizeof((array))/sizeof((array)[0]))

int idx = 0;


void put(int arr, int value){
    int arr_size = arrayLength(&arr);
    if (idx > arr_size){
        int *tmp;
        tmp = malloc((arr_size * 2) * sizeof(int));
        memcpy(tmp, &arr, arr_size);
        arr = *tmp;
    }else{
        arr[idx] = value;
    }
}


int pop(int *arr){
    int tmp = arr[-1];
    arr[-1] = 0;
    return tmp;
}

int main(void){
    int arr[6];
    put(*arr, 1);
    put(*arr, 2);
    put(*arr, 3);
    put(*arr, 4);
    put(*arr, 5);
    printf("%p\n", arr);
    printf("%lu\n", arrayLength(arr));
    put(*arr, 10);
    put(*arr, 11);
    put(*arr, 12);
    printf("%lu\n", arrayLength(arr));
    return 0;
}

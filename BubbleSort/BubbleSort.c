#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void bubble_sort(int *arr, int arr_sz){
    int tmp=0;
    int count = 0;
    while((arr_sz-count) > 0){
        for (int x=0; x < arr_sz - count; x++){
            if(arr[x+1] < arr[x]){
                tmp = arr[x+1];
                arr[x+1] = arr[x];
                arr[x] = tmp;
            }
        }
        count += 1;
    }
}

int main(void){
    srand(time(0));
    int arr[50];
    int arr_sz = sizeof(arr) / sizeof(int);
    printf("UNSORTED\n");
    for(int x=0; x<=50; x++){
        arr[x] = rand() % 1000;
        printf("%d,", arr[x]);
    }

    bubble_sort(arr, arr_sz);
    printf("\n");
    printf("\n");
    printf("SORTED\n");
    for(int x=0; x<=50; x++){
        printf("%d,", arr[x]);
    }
    return 0;
}

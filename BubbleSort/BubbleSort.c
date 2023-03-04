#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void bubble_sort(int *arr, int arr_sz){
    for(int y = 0; y < arr_sz; y++){
        for (int x = 0; x < arr_sz - y; x++){
            if(arr[x] > arr[x+1]){
                const int tmp = arr[x];
                arr[x] = arr[x + 1];
                arr[x + 1] = tmp;
            }
        }
    }
}

int main(void){
    srand(time(0));
    int arr[10];
    int arr_sz = sizeof(arr) / sizeof(int);
    printf("UNSORTED\n");

    for(int x=0; x<=10; x++){
        arr[x] = rand() % 1000;
        if(x!=0){printf(",");}
        printf("%d", arr[x]);
    }

    bubble_sort(arr, arr_sz);

    printf("\n");
    printf("\n");
    printf("SORTED\n");
    for(int x=0; x<=10; x++){
        if(x!=0){printf(",");}
        printf("%d", arr[x]);
    }
    return 0;
}

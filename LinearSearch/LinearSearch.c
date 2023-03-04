#include <stdio.h>
#include <stdlib.h> //srand
#include <time.h> //time(0)

#define LS 20
#define VALUE 10

void fill_array(int *arr) {
    srand(time(0)); 
    for (int x=0; x < LS; x++){
        arr[x] = rand() % 50;
    }    
}

int main(int argc, char *argv[])
{
    int arr[LS]; 
    fill_array(arr);

    for (int index=0; index < LS; index++){
        if(arr[index] == VALUE) { 
            printf("Value Found (%d) at index %d\n",  arr[index], index); 
            return 0;
        }
    }

    printf("Value not found\n");
    return 0;
}

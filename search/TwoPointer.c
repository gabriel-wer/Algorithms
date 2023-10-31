#include <stdio.h>
#include <stdlib.h>

int TwoPointer(int *arr, int target, size_t arr_len) {
    int sum = 0;
    int x = 0; 
    int y = arr_len-1;
    while (x < y) {
        sum = arr[x] + arr[y];

        if (sum == target){
            return 1;
        }

        if (sum > target) {
            y--; 
        }

        if (sum < target) {
            x++;
        }
        printf("X: %d  -- Y: %d\n", x, y);
    }
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2){
        printf("Must provide the target number");
        return 0;
    }

    //has to be a sorted list
    int arr[10] = {1, 3, 5, 7, 10, 12, 13, 15, 17, 19};
    size_t arr_len = sizeof(arr) / sizeof(int);
    int result = TwoPointer(arr, atoi(argv[1]), arr_len);

    printf("%d\n", result);
    if (result) {
        printf("Target number found!");
    } else {
        printf("It was not possible to find your target number on the list.");
    }
    return 0;
}

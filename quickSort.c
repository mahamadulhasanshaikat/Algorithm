#include <stdio.h>

void quickSort(int array[], int low, int high) {
    int pivot, i, j, temp;
    if (low < high) {
        pivot = low;
        i = low;
        j = high;
        while (i < j) {
            while (array[i] <= array[pivot] && i <= high) {
                i++;
            }
            while (array[j] > array[pivot] && j >= low) {
                j--;
            }
            if (i < j) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        temp = array[j];
        array[j] = array[pivot];
        array[pivot] = temp;
        quickSort(array, low, j - 1);
        quickSort(array, j + 1, high);
    }
}

int main() {
    int array[] = {7, 12, 1, -2, 0, 15, 4, 11, 9};
    int n = sizeof(array)/sizeof(array[0]);
    int i;
    quickSort(array, 0, n-1);
    printf("Sorted array: \n");
    for (i=0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

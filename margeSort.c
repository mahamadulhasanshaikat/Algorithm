#include <stdio.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void marge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

     void margeSort(int A[], int low, int high){
         int mid;
         if(low<high){
         mid = (low+high)/2;
         margeSort(A, low, mid);
         margeSort(A, mid+1, high);
         marge(A, mid, low, high);
         }
     }
     

int main()
{
    int A[] = {6,22,9,1,36,6,3,43,4,8};
    int n = 10;
    printf("Unsorted Array List: ");
    printArray(A, n);
    printf("Sorted Array List: ");
    margeSort(A, 0, 6);
    printArray(A, n);
    return 0;
}

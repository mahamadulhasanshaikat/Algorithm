
#include <stdio.h>

void bubbleSort(int arr[], int size){
    
    int isSorted = 0;
    int swap;
    
    for(int i = 0; i < size - 1; i++){
        
        printf("\n\nNumber of passes element %d\n", i+1);
        isSorted = 1;
        
        for(int j = 0; j < size - 1 - i; j++){
            
            if(arr[j] > arr[j+1]){
             
            swap = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = swap; 
            
            isSorted = 0;
            
            }
            
        }
        
        if(isSorted){
            return;
        }
        
        
    }
    
}

void inputArr(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        
        scanf("%d",&arr[i]);
    }
}

void printArr(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        
        printf("%d\t",arr[i]);
    }
}



int main()
{
    int size ;
    printf("Enter the array size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Input Element: ");
    inputArr(arr,size);
    
    printf("\nThe Array Before Sorted\n");
    printArr(arr,size);
    
    bubbleSort(arr,size);
    printf("\nThe Array After Sorted \n");
    printArr(arr,size);
   
    return 0;
}

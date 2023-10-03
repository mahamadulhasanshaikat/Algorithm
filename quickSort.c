
#include <stdio.h>

int patition(int arr[], int low, int high){
    
    int pivot, temp, i , j;
    
    
    
    pivot = arr[low];
    i = low + 1;
    j = high;
    
    
    // i, j swap
   do{
       
        while( arr[i] <= pivot){
        i++;
    }
    
    while( arr[j] > pivot){
        j--;
        
    }
    
    // swap
    if(i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
       
   } while(i < j);
   
   
   // after interchange to swap for pivot
   temp = arr[low];
   arr[low] = arr[j];
   arr[j] = temp;
   
   return j;
    
    
}


void quickSort(int arr[], int low, int high){
    
    int patitionIndex;
    
    if( low < high ){
       
       patitionIndex = patition(arr, low, high);
       quickSort(arr, low, patitionIndex -1);
       quickSort(arr, patitionIndex +1, high);
       
    }
    
}


int main(){

 int arr[] = { 222, 21, 1, 2, 111, 999, 0, 5, 8};
 int n = 9;
 
 quickSort(arr, 0, n-1 );

for(int i = 0; i < n; i ++){
    printf("%d\t", arr[i] );
}
    return 0;
}



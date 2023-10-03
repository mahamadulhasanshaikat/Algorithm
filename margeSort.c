
#include <stdio.h>

void marge(int arr[], int mid, int low, int high){
    
    int i = low;
    int j = mid + 1;
    int k = low;
    
    int temp[100];
    
    while(i <= mid && j <= high){
        
        if(arr[i] < arr[j]){
            
            temp[k] = arr[i];
            i++;
            k++;
            
        }else{
            temp[k] = arr[j];
            j++;
            k++;
            
        }
    }
    
    while(i <= mid ){
        temp[k] = arr[i];
        i++;
        k++;
    }
    
    while(j <= high){
        temp[k] = arr[j];
        j++;
        k++;
    }
    
    
    for(int i = low; i <= high; i++){
        arr[i] = temp[i];
    }
    
    
}


void margeSort(int arr[], int low, int high){
    
    int mid;
    
    if(low < high){
        
        mid = (low + high) / 2;
        margeSort(arr, low, mid);
        margeSort(arr, mid+1, high);
        marge(arr, mid, low, high);
        
    }
    
    
}


int main()
{
    
    int arr[] = {21, 222, 111, 143, 233, 7, 5, 3, 1};
    int n = 9;
    
    margeSort(arr, 0, 8);
    
    for(int i = 0; i < n; i++){
        
        printf("%d\t", arr[i]);
    }
    
    return 0;
}


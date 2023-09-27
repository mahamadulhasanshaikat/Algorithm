 #include <stdio.h>


void insertionSort( int arr[], int n ) {
    
  for ( int i = 1; i < n; i++) {
      
    int tmp = arr[i];
    int j = i - 1;

    
    while (tmp < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
   
    
    arr[j + 1] = tmp;
  }
}


void pickArray (int arr[], int n, int pick ) {
    
    int temp[n];
  
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[(i + pick) % n] = temp[i];
    }
}



int main() {

    int arr[] = {9, 1, 3, 2, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pick = 3;
    insertionSort( arr, n );

    printf("Array after sorted: ");

    for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Array start from index 3: ");
    pickArray(arr,n, pick);

     for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;

}

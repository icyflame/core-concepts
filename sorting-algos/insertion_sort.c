//
//  Insertion Sort
//
//  Created by Mini Bhati on 07/01/17.
//  Copyright © 2017 Mini Bhati. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n){
    int i, j, key;
    for(j=1; j< n; j++){
        key = arr[j];
        i = j-1;
        /* Move elements of arr[0..i-1], that are greater than key, 
         to one position ahead of their current position */
        while(i>=0 && arr[i] > key){
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }
}

// A utility function ot print an array of size n
void printArray(int arr[], int n){
    for(int i=0 ;i< n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    int number;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &number);
    int * arr;
    arr = (int *) malloc(sizeof(int) * number);
    printf("Enter the array to sort: ");
    for(int i=0; i< number; i++){
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, number);
    printArray(arr, number);
}

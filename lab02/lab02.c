#include <stdio.h>


// Insertion Sort Algorithm
void insertionSort(int *arr, int size) {
    int temp, currLoc;
    for (int i = 1; i < size; i++) {
        currLoc = i;
        while (currLoc > 0 && arr[currLoc-1] > arr[currLoc]) {
            temp = arr[currLoc];
            arr[currLoc] = arr[currLoc-1];
            arr[currLoc-1] = temp;
            currLoc--;
        }
    }
}

int main() {
    // Initialize array, ask for user input
    int n = 0;
    int arr[10];
    printf("Enter 10 numbers for an array!\n");
    
    // Loop through user input to fill out array
    while (n < 10) {
        int input;
        scanf("%d\n", &input);
        arr[n] = input;
        n++;
    }

    // Print array before sorting

    printf("Unsorted array:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d, ", arr[i]);
    }

    // Run sorting algorithm on user input
    insertionSort(arr, 10);

    // Print array after sorting
    printf("\nSorted array:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d, ", arr[i]);
    }





    return 0;
}
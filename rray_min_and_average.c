#include <stdio.h>

// Function to find the minimum number in the array
int findMin(int arr[], int size){
    int min = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

// Function to calculate the average of the array
float findAve(int arr[], int size){
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }

    float average = (float)sum / size;
    return average;
}

int main(){
    int arr[] = {1, 34, 57, 6, 89, 657};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Minimum number: %d\n", findMin(arr, size));
    printf("Average of array: %.2f\n", findAve(arr, size));

    return 0;
}

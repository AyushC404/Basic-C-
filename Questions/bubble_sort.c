#include <stdio.h>

void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
    return 0;
}

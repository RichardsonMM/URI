#include<stdio.h>
#include<utility>

using namespace std;

void bubblesort_recursive(int arr[], int n){

    if(n == 1)
        return;
    
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);

    bubblesort_recursive(arr, n - 1);
}

int main(){

    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    bubblesort_recursive(arr, n); 
    
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

        printf("\n");


    return 0;
}
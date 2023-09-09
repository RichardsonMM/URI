#include<stdio.h>
#include<utility>

using namespace std;

void insertionsort_recursive(int arr[], int n){

    if(n <= 1)
        return;
    
    insertionsort_recursive(arr, n - 1);

    int ultimo = arr[n - 1];
    int j = n - 2;

    while(j >= 0 && arr[j] > ultimo){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = ultimo;
}


int main(){

    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionsort_recursive(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}
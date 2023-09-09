#include<stdio.h>

using namespace std;



int main(){
    int V[20], x;
    int temp; 

    for(int i = 0; i < 20; i++){
        scanf("%d", &V[i]);
    }
    for(int i = 0, j = 19; i < 10; i++, j--){
        temp = V[i];
        V[i] = V[j];
        V[j] = temp;
    }
    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, V[i]);
    }


    return 0;
}
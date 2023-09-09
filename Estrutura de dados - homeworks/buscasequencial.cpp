#include<stdio.h>

using namespace std;

int main(){

    int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x, i;

    scanf("%d", &x);

    for(i = 0; i < 11; i++){
        if(v[i] == x);
            printf("encontrou na posição %d\n", i);
        }
   
    return 0;
}
#include<stdio.h>

using namespace std;

int main(){

    int t;
    int n[1000];

    scanf("%d", &t);

    for(int i = 0, j = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, j);
        j++;
        if(j == t)
            j=0;
    }


    return 0;
}
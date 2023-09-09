#include<stdio.h>

using namespace std;

int main(){

    int n, y, cont = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &y);

        cont += y != 1;
    }

    printf("%d\n", cont);


    return 0;
}
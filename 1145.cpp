#include<stdio.h>

using namespace std;

int main(){

    int x, y, b = 0, a;

    scanf("%d %d", &x, &y);

    for(a = 1; a <= y; a++){
        b++;
        if(b == x){
            printf("%d", a);
        }
        else 
            printf("%d ", a);
        if(b == x){
            b = 0;
            printf("\n");
        }
    }

    return 0;
}
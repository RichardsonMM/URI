#include<stdio.h>

using namespace std;

int main (){

    int x, y, i, j;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x<y){
        for(i = x+1; i<y; i++){
            if(i%5 == 2 || i%5 == 3){
                printf("%d\n", i);
            }
        }   
    }
    if (x>y){
        for(j = y+1; j < x; j++){
            if(j%5 == 2 || j%5 == 3){
                printf("%d\n", j);
            }
        }
    }


    return 0;
}
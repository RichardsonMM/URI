#include<stdio.h>

using namespace std;

int pot(int e, int v){
    if(e == 0 || v == 0)
        return 1;
    else if(v == 1)
        return e;
    else
        return v*pot(e-1);
}

int main(){

    int x, y;

    scanf("%d %d", &x, &y);

    int p = pot(x,y);
    printf("%d\n", p);

    return 0;
}
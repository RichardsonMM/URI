#include<stdio.h>

using namespace std;

int multi(int x, int y){
    
    if(y == 0)
        return 0;
    else if(x == 0)
        return x;
    else
        return x+multi(x,--y);   
}

int main(){

    int x, y, m;

    scanf("%d %d", &x, &y);

    m = multi(x, y);

    printf("%d\n", m);

    return 0;
}
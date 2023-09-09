#include<stdio.h>

using namespace std;

int main(){
    int n, x, y, b, c = 0;

    for (int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);

        if (x==y){
            c = 0;
            printf("%d\n", c);
        }
        else if(x<y){
            for(b = x+1, c = 0; b<y; b++){
                if(b%2==1 || b%2 == -1){
                    c += b;
                }

            }
            printf("%d\n", c);
        }
        else{
            for(b = y+1, c = 0; b<x; b++){
                if(b%2==1 || b%2 == -1){
                    c+=b;
                }
            }
            printf("%d\n", c);
        }
}





        return 0;
}
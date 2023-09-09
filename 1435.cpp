#include<stdio.h>
//#define MAX ((int)1e9)

using namespace std;

int main(){ 

    //int mat[MAX][MAX];
    int n, x;

    while(true){
        scanf("%d", &n);
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                x = i;
                if(j < x) x = j;
                if(n - i + 1 < x) x = n - i + 1;
                if(n - j + 1 < x) x = n - j + 1;
                printf("%3d", x);
                if(j < n) printf(" ");
                else printf("\n");
            }
        }
        printf("\n");
    }

    return 0;
}
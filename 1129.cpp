#include<stdio.h>

using namespace std;

int main(){

    int n, A, B, C, D, E;
    int cnt = 0;

    while(scanf("%d", &n)!=EOF){
        if(n == 0) break;

        for(int i = 0; i < n; i++){
            scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

            if(A <= 127 && B <= 127 || A <= 127 && C <= 127 || A <= 127 && D <= 127 || A <= 127 && E <= 127 || B <= 127 && C <= 127 || B <= 127 && D <= 127 || B <= 127 && E <= 127 || C <= 127 && D <= 127 || C <= 127 && E <= 127 || D <= 127 && E <= 127) printf("*\n");

            else if(A > 127 && B > 127 && C > 127 && D > 127 && E > 127) printf("*\n");

            else if(A <= 127){
                printf("A\n");
            }
            else if(B <= 127){
                printf("B\n");
            }
            else if(C <= 127){
                printf("C\n");
            }
            else if(D <= 127){
                printf("D\n");
            }
            else if(E <= 127){
                printf("E\n");
            }      
        }
    }
    
    return 0;
}
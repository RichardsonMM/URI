#include<stdio.h>

using namespace std;

int main (){

    int n, x, cont, cont1;

    while(scanf("%d", &n) != EOF){
        
        for(int i = 0; i<=n; i++){
            scanf("%d ", & x);

            if (x == 0){
                cont ++;
            }
            else{
                cont1++;
            }
        }

        if(cont >= 2/3*n){
            printf("acusacao arquivada\n");
        }
        if(cont1 >= 2/3*n){
            printf("impeachment\n");
        }

    }




    return 0;
}
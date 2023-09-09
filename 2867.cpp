/*

 EM C++ DE UEMRDA 
 FIZ EM PYTHON

*/
#include<stdio.h>
#include<cmath>
#define MAX (int(1e9))

using namespace std;

int main(){
    long long int c, N, M, cnt = 0, pot = 0, vet[MAX];
    scanf("%lld", &c);
    
    for(int i = 0; i < c; i++){
        scanf("%lld %lld", &N, &M);
        pot = pow(N, M);
        cnt = 0;
        while(pot > 0){
           pot /= 10;
           cnt++;
           printf("res : %lld\n", pot);
       }
        printf("%lld\n", cnt);
    }
    return 0;
}
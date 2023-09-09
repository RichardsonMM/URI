#include<stdio.h>

using namespace std;

int main(){

    int x, t, y, soma;

    scanf("%d", &t);

    for (int i = 1; i<= t; i++){
        scanf("%d %d", &x, &y);
        soma = x+y;

        if(soma == 0){
            printf("PROXYCITY\n");
        }
        if(soma == 1){
            printf("P.Y.N.G.\n");
        }
        if(soma == 2){
            printf("DNSUEY!\n");
        }
        if(soma == 3){
            printf("SERVERS\n");
        }
        if(soma == 4){
            printf("HOST!\n");
        }
        if(soma == 5){
            printf("CRIPTONIZE\n");
        }
        if(soma == 6){
            printf("OFFLINE DAY\n");
        }
        if(soma == 7){
            printf("SALT\n");
        }
        if(soma == 8){
            printf("ANSWER!\n");
        }
        if(soma == 9){
            printf("RAR?\n");
        }
        if(soma == 10){
            printf("WIFI ANTENNAS\n");
        }
    }



    return 0;
}
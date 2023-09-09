#include<stdio.h>

using namespace std;

int main(){

    int t, cod;
    double soma = 0.0, qt;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d %lf", &cod, &qt);
        if(cod == 1001){
            soma += 1.50*qt;
        }
        else if(cod == 1002){
            soma += 2.50*qt;
        }
        else if(cod == 1003){
            soma += 3.50*qt;
        }
        else if(cod == 1004){
            soma += 4.50*qt;
        }
        else if(cod == 1005){
            soma += 5.50*qt;
        }
    }

    printf("%.2lf\n", soma);



    return 0;
}
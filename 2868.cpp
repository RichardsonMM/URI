#include<stdio.h>

using namespace std;

int main(){

    int a, b, c, d, e;
    char op;
    int correto = 0, res = 0;
    
    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        correto = 0;
        scanf("%d %c %d = %d", &b, &op, &d, &e);
        if(op == '+') correto = b + d;
        else if(op == 'x') correto = b * d;
        else if(op == '-') correto = b - d;
        printf("E");
        if(e > correto){
            for(int j = 0; j < e - correto; j++){
                printf("r");
            }
        }
        else{
            for(int j = 0; j < correto - e; j++){
                printf("r");
            }
        }
        printf("ou!\n");
    }





    return 0;
}
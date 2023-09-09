#include<stdio.h>

using namespace std;

int main(){

    double v[100];
    double x;

    for(int i = 0; i < 100; i++){
        scanf("%lf", &v[i]);
    }
    for(int i = 0; i < 100; i++){
        if(v[i] <= 10.0){
            printf("A[%d] = %.1lf\n", i, v[i]);
        }
    }

    return 0;
}
#include<stdio.h>

using namespace std; 

int main(){ 

    double N[100];
    double y;

    scanf("%lf", &y);

    printf("N[0] = %.4lf\n", y);

    for(double i = 1, j = y/2; i <= 99; i++, j/=2.0){
        printf("N[%.0lf] = %.4lf\n", i, j);
    }




    return 0;
}
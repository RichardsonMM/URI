#include<stdio.h>
#include<cmath>
#define pi 3.14159

using namespace std;

int main(){

    double raio, volume; 

    scanf("%lf", &raio);

    volume = (4.0/3.0)*pi*pow(raio, 3);

    printf("VOLUME = %.3lf\n", volume);


    return 0;
}
#include<stdio.h>

using namespace std;

int main(){

    int distance;
    double fuel, consumption;

    scanf("%d", &distance);
    scanf("%lf", &fuel);

    consumption = distance/fuel;

    printf("%.3lf km/l\n", consumption);



    return 0;
}
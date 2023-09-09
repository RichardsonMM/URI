#include<stdio.h>

using namespace std;

int main(){

    double a, b;

    double per = 0.0;

    scanf("%lf %lf", &a, &b);

    per = (b*100.00)/a;

    printf("%.2lf%%\n", per-100.00);


    return 0;
}
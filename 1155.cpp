#include<stdio.h>

using namespace std;

int main(){

    double s = 1;

    for (float i = 2; i < 100; i++){
        s += 1/i;
    }
    printf("%lf\n", s);

    return 0;
}
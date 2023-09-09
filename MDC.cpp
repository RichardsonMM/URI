#include <stdio.h>

int mdc(int num1, int num2) {

    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}

int main() {

    double R;

    scanf("%lf", &R);

    int d = mdc(R, 360);

    printf("%d\n", 360/d);

    return 0;
}
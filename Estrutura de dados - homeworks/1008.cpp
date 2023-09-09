#include<stdio.h>

using namespace std;

int main (){

    int num, hours;
    double perhour, salary;

    scanf("%d", &num);
    scanf("%d", &hours);
    scanf("%lf", &perhour);

    salary = (hours*perhour);
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}
#include<stdio.h>

using namespace std;

int main(){

    int n, hours, minutes, seconds;

    scanf("%d", &n);

    hours = n/3600;
    minutes = n%3600/60;
    seconds = n%60;

    printf("%d:%d:%d\n", hours, minutes, seconds);




    return 0;
}
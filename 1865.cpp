#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main(){

    int c, n;
    string palavra;

    scanf("%d", &c);

    for(int i = 0; i < c; i++){
        cin >> "" >> palavra >> "" >> n;

        if(palavra == "Thor")
            printf("Y");
        else
            printf("N");
    }

    return 0;
}
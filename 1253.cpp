#include<iostream>
#include<string.h>
using namespace std;

// ASCII: 65 a 90
// Alfabeto





int main(){
    int n;
    char alfabeto[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char frase[50];
    int str, pos, dif;
    cin >> n;
    while(n--){
        cin >> frase;
        cin >> pos;
        for(int i = 0; i < strlen(frase); i++){
            str = frase[i];
            for(int j = 0; j < strlen(alfabeto); j++){
                if(frase[i] == alfabeto[j]){
                    frase[i] = alfabeto[j-pos];
                    if(frase[i] < 65){
                        dif = 65 - frase[i];
                        frase[i] = alfabeto[90-dif];
                    } 
                }
                dif = 0;
            }

        }
        cout << frase << endl;
    }

    return 0;
}
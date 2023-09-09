#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

bool cmp(string a, string b){
    return a.size() < b.size();
}

int main(){ 

    int n, cont = 0;
    string aux;
    vector<string> vet;

    while(cin >> n){
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            cin >> aux;
            vet.push_back(aux);
        }

        sort(vet.begin(), vet.end(), cmp);

        int ok = 0;
        aux = vet[0];

        for(int i = 0; i < vet.size(); i++){
            for(int j = i; j < strlen(vet[i]); i++){
                if(vet[i] == aux[j]) cont++;
            }
            if(cont == strlen(aux))
                ok++;
        }

        cout << ok << endl;

    }

    return 0;
}
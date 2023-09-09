#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vet[100000];
    vector<int> aux[100];
    int N, pos, st = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> vet[i];
        pos = vet[i];
        aux[i] = pos;
    }
    for(int i = 0; i < N; i++){
        if(st == 1) cout << "*";
        st = 0;
        for(int j = i+1; j <= 100; j++){
            st = 1;
            if(aux[j] > vet[i]){
                st = 2;
                cout << aux[j] << " ";
                break;
            }
        }
    }
    cout << endl;


    return 0;
}
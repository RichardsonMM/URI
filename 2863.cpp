#include<iostream>

using namespace std;

int main(){

    int n;
    double menor = 0.0;
    while(cin >> n){
        double v[n];
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(i == 0) menor = v[i];
            if(menor > v[i]) menor = v[i];
        }
        cout << menor << "\n";
    }
    return 0;
}
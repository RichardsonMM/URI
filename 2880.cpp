#include<iostream>

using namespace std;

int main(){
    string cifrada, crib;

    while(cin >> cifrada >> crib){
        int cnt = 0;
        int tamCifrada = cifrada.length(), tamCrib = crib.length();
        for(int i = 0; i <= tamCifrada - tamCrib; i++){
            bool ok = true;
            for(int j = 0; j < tamCrib; j++){
                if(cifrada[i+j] == crib[j]){
                    ok = false;
                    break;
                }
            }
            if(ok) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
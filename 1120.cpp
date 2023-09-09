#include<iostream>
#include<string.h>

using namespace std;


int main(){
    string ans, number;
    string d;
    char letra;
    int v, cnt = 0;
    
    while(cin >> letra >> number){
        ans[0] == '0';
        if(letra == '0' && number[0] == '0') break;

        for(int i = 0; i < number.size(); i++){
            if(number[i] != letra){
                ans += number[i];
            }
        }

        for(int i = 0; i < ans.size(); i++){
           if(ans[i] == '0')
                cnt++;
            else{
                v = i;
                break;
            }
        }

        for(int k = v; k < ans.size(); k++){
            d += ans[k];
        }

        if(cnt == ans.size() || ans.size() == 0) 
            cout << 0 << endl;
        else
            cout << d << endl;

        cnt = 0;
        ans = "\0";
        d = "\0";
    }

    return 0;
}
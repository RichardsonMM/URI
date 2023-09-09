#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<char> st;
    while(n--){
        string a;
        cin >> a;
        int dima = 0;
        stack<char> st;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == '<')
                st.push(a[i]);
            if(a[i] == '>'){
                if(!st.empty()){
                    st.pop();
                    dima++;
                }
            }
        }
        cout << dima << endl;   
    }

    return 0;
}

#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    queue <int> myqueue;
 
    while(cin>>n){
            if(n==0)
             break;
 
        for(int i=0;i<n;i++){
            myqueue.push(i+1);
        }
 
        int i = myqueue.size();
 
        cout<<"Discarded cards: ";
 
        while(i!=1){
            int dis = myqueue.front();
            cout<<dis;
            if(i>2){ cout<<", "; }
            myqueue.pop();
            i--;
 
            int top = myqueue.front();
            myqueue.push(top);
            myqueue.pop();
 
        }
            cout<<"\n"<<"Remaining card: "<<myqueue.front()<<endl;
            myqueue = queue<int>();
    }
 
 
    return 0;
}

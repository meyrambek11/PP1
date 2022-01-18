#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,x;
    cin >> n;
    while(n>0){
        x = n%16;
        v.push_back(x);
        n = n/16;    
    }
    for(int i = v.size()-1;i>= 0;i--){
        if(v[i] == 10){
            cout << "A";
        }
        else if(v[i] == 11){
            cout << "B";
        }
        else if(v[i] == 12){
            cout << "C";
        }
        else if(v[i] == 13){
            cout << "D";
        }
        else if(v[i] == 14){
            cout << "E";
        }
        else if(v[i] == 15){
            cout << "F";
        }
        else
        cout << v[i];
    }
    return 0;
}
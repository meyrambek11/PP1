#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<char> v;
    char s;
    while(cin >> s){
        v.push_back(s);
    }
    for(int k = 0;k<v.size();k++){
    for(int i = 0;i<v.size()-1;i++){
        for(int j = i+1;j<v.size();j++){
            if(v[i] == v[j]){
                v.erase(v.begin()+j);
            }
        }
    }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
}
#include <bits/stdc++.h>
using namespace std;

bool f(vector<char> v){
    for(int i=0;i<v.size()/2;i++){
        if(v[i] != v[v.size()-1-i]){
            return false;
        }

    }
    return true;
}
int main(){
    int cnt = 0;
    vector<char> v;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    do{
        if(f(v)){
          cnt++;
        }  
    }while(next_permutation(v.begin(),v.end()));
    if(cnt != 0 || s.size() == 2){
        cout << "YES";
    }
    else
    cout << "NO";
}
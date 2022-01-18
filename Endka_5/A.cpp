#include <bits/stdc++.h>
using namespace std;

bool f(string s){
        if(s[0] == 'a'){
            return true;
        }
    
    return false;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    vector<string> v;
    string s;
    int cnt = 0;
    while(cin >> s){
        v.push_back(s);

    }
    for(int i=0;i<v.size();i++){
        if(f(v[i]) == true){
            cnt++;
        }
    }
    cout << cnt;


    return 0;
}
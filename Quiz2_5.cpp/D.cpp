#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<char> v;
    vector<char> q;
    string s;
    int cnt = 0,sum = 0,add = 0;
    cin >> s;
    for(int i = 0;i<s.size();i++){       
        v.push_back(s[i]);
        q.push_back(s[i]);
        if(s[i] >= '0' && s[i] <= '9'){
            cnt++;
        }
    }
    reverse(v.begin(),v.end());
    if(v.size()>=10){
        sum++;
    }
    if(v != q){
        sum++;
    }
    
    if(cnt >= 3 ){
        sum++;
    }
    if(sum == 3){
        cout << "YES";
    }
    else
    cout << "NO";


}
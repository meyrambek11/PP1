#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    string s;
    int cnt = 0;
    char k;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            v.push_back(s[i]);
        }
    }
    
     
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        if(v[i] == v[i+1]){
           k = v[i];
           cnt++;
        }
    }    
    if(cnt == 0){
        cout << "NO";
    }
    else if(cnt != 0){
        cout << k;
    } 
    return 0;
}
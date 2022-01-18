#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    set<int> v;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
    
        if (s[i] >= '0' && s[i] <= '9' ){
           v.insert(s[i]);
       } 
    }
    if(v.size() == 0){
        cout << "NO";
    }
    else if(v.size() != 0){
       for(set<int> :: iterator it = v.begin();it != v.end();it++){
        cout << char(*it);
       }
    } 
}
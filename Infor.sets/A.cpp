#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<char> v;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
       if(s[i] == '.' || s[i] == ',' || s[i] == '?' || s[i] == ';' || s[i] == ':' || s[i] == '!'){
           v.push_back(s[i]);
       } 
    }

    cout << v.size();
}
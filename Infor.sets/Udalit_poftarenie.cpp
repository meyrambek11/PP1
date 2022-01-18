#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<char> v;
    set<char> f;
    string s;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        int k  = f.size();
        f.insert(s[i]);
        if(f.size()!=k){
            v.push_back(s[i]);
        }
    }
    for(int i = 0;i<v.size();i++){
        cout << v[i];
    }
    return 0;
}
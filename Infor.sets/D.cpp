#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    string s;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        if(s[i] >= '0' && s[i] <= '7'){
            v.push_back(s[i]);
        }
    }
    if(s.size() == v.size()){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}
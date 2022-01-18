#include <iostream>
#include <set>
using namespace std;

int main(){
    set<char> v;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        v.insert(tolower(s[i]));
    }
    cout << v.size() << endl;
    for(set<char> :: iterator it = v.begin(); it != v.end();it++){
        cout << (*it) << " ";
    }
    return 0;
}

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    set<int> v;
    string s;
    //int cnt = 0;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        v.insert(tolower(s[i]));
    }
    cout << v.size() << endl;
    for(set<int> :: iterator it = v.begin(); it != v.end(); it++){
        cout << char(*it) << " ";
    }
    return 0 ;

    
    
}


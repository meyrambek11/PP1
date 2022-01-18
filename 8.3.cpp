#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    char c;
    string s;
    cin >> c;
    cin >> s;
    for(int i=0;i<s.size();++i){
        if(s[i] != c){
            cout << s[i];
        }
    
    }
    return 0;
}
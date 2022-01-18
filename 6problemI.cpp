#include <iostream>
#include <algorithm>
using namespace std;

string f( string s){
    for(int i=0;i<=s.size();++i){
        if(s[i]>='a' && s[i]<='z'){
          if(i%2 == 0){
            s[i] = s[i] - 32;
          }
        }
    }
    
    return s;
}
int main(){
    string s;
    cin >> s;
    cout << f(s);
    return 0;
}

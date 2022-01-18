#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i] >= 'a' && s[i]<='y'){
            s[i] = s[i] + 1;
        }
        else if(s[i] == 'z'){
            s[i] = s[i] - 25;
        }
    }
    for(int i=0;i<s.size();i++){
        cout << s[i];
    }
    return 0;

}
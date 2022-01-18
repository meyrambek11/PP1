#include <iostream>
using namespace std;
int main (){
    string s;
    bool c=false;
    cin >> s;
    for(int i=0;i<=s.size();++i){
        if(s.size() >=3 && s.size()<=15){
            c = true;
        }
        else if(s[0] >= 'A' && s[0]<='Z'){
            c = true;
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            c = true;
        }
        else if( s[i] == 'a' && s[i] == 'i' && s[i] == 'o' && s[i] == 'u' && s[i] == 'y' && s[i] == 'e' && s[i] == (s[i]-32)){
            c = true;
        }
    }
    if(c == true){
        cout << "Yes";
    }
    else if(c == false){
    cout << "No";
    }
    return 0;
}
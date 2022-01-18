#include <iostream>
using namespace std;
int main(){
    string s,t;
    cin >> s;
    cin >> t;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;    
        }  
          
    }
    
    for(int j=0;j<t.size();j++){
        if(t[j] >= 'A' && t[j] <= 'Z'){
            t[j] = t[j] + 32;    
        }    
    }
    if(s == t){
        cout << "Valid";
    }
    else
    cout << "Invalid";
    
    return 0;
    
}
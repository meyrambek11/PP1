#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9'){
                cnt++;
        }  
        if(s[0] != '0'){
            cnt++;
        }
    }
    if(cnt == s.size()*2){
        cout << "Valid";
    }
    else
    cout << "Invalid";
    
    
  
    
    return 0;
}
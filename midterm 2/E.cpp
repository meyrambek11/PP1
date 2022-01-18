#include <iostream>
using namespace std;
int main(){
    string s;
    int cnt = 1;
    bool m;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s.size() >= 3 && s.size() <= 15){
            if(s[0] >= 'A' && s[0] <= 'Z'){
             if(s[i] >= 'a' && s[i] <= 'z' ){
                  if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' ||  s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y'){\
                   m = true;
             }
            } 
          }
        } 
    else{
        m = false;
    }
    
    }

    /*cout << cnt << "\n";
    if(cnt == s.size()-1){
        m = true;
    }
    else{
        m = false;
    }*/
    if(m == true){
        cout << "Hi," << " " << s;
    }
    else 
    cout << "Invalid name";
    
    return 0;
}
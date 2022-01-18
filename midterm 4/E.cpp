#include <iostream>
using namespace std;
int main(){
    string s;
    int cnt = 0,sum = 0,add = 0,deg = 0;
    
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cnt++;
        }
        if(s[i] >= 'a' && s[i] <= 'z'){
            sum++;
        }
        if(s[i] >= '0' && s[i] <= '9'){
            add++;
        }   
    }
    if(s.size() >= 8){
        deg++;
    }
    if(cnt !=0 ){
        deg++;
    } 
    if(sum != 0){
        deg++;
    }
    if(add != 0){
        deg++;
    }
    if(deg == 4){
        cout << "Yes";
    }
    else 
    cout << "No";
   
    
    return 0;

}
#include <iostream>
using namespace std;
int main(){
    string s;
    int cnt = 0;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '('){
            cnt++;
        }
        if(s[i] == ')'){
            cnt--;
        }
        if(cnt<0){
            break;
            cout << "NO";
            
        }

    }
    if(cnt == 0){
        cout << "YES";
    }
    else
    cout << "NO";
}
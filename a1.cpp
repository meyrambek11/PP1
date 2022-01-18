#include <iostream>

using namespace std;

int main(){
    string s;
    int sum = 0;
    cin >> s;
    for(int i=0;i<=s.size();++i){
     if(s[i] >= 97 && s[i] <= 122){
        sum = sum + s[i];
     }
    }
    if(sum == 2847){
        cout << "Yes";
    }
    else
    cout << "No";
    return 0;
}
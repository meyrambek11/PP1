#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int sum=0;
    string s;
    cin >> s;
    for(int i=0;i<s.size();++i){
        if(s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117){
        sum = sum + 1;
        }
        
    }
    cout << sum;
    
    return 0;
}
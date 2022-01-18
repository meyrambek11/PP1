#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    char x;
    int k,sum = 0;
    cin >> s >> x >> k;
    for(int i=0;i<s.size();++i){
        if(s[i] == x){
            sum = sum + 1;
        }
    }
    if(sum == k){
        cout << "YES";
    }
    else
    cout << "NO";
    return 0;
}
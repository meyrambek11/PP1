#include <iostream>
using namespace std;

int f(string s,int i,int cnt){
    if(s.size() == i) return cnt;
    if(s[i]%2 == 0){
        cnt = cnt + 1;
    }
    return f(s,i+1,cnt);
}
int main(){
    string s;
    cin >> s;
    cout << f(s,0,0);
}
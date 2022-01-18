#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,s2;
    cin >> s;
    string t;
    t = "rgb";
    int cnt = 0;
    for(int i=0;i<s.size();i++){
        s2 = s.substr(i,3);
        if(s2 == t){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
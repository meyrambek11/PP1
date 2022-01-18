#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,s2;
    cin >> s;
    int cnt = 0;
    for(int i=0;i<s.size();i++){
        s2 = s.substr(i,3);
        if(s2 == "375"){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
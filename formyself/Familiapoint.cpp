#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,max = 0;
    string s,ans;
    cin >> n;
    getline(cin,s);
    for(int i=0;i<n;i++){
        getline(cin,s);
        string c;
        for(int j = s.size()-1;j>=0;j--){
            if(s[j] == ' '){
                break;
            }
            c = s[j] + c;
        }
        stringstream ss;
        ss<<c;
        ss>>x;
        if(x > max){
            max = x;
            ans = s;
        }
    }
    cout << ans;
}
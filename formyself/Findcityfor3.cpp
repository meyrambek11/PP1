#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    map<string, string> m;
    map<string, string> :: iterator it;
    int n,x;
    string s,ss,d;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        cin >> x;
        for(int j = 0;j<x;j++){
            cin >> ss;
            m[ss] = s;
        }
    }
    int y;
    cin >> y;
    cout << y << endl;
    for(int i = 0;i<y;i++){
        cin >> d;
        if(m[d] == ""){
            cout << "Unknown" << endl;
        }
        else
        cout << m[d] << endl;
    }
    return 0;

}
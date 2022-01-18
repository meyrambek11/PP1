#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    map<string, int> m;
    string s;
    while(cin >> s){
        m[s]++;
        if(m[s] > 1){
            cout << m[s] - 1 << " "<< endl;
        }
        else
        cout << 0 << " "<< endl;
    }

}
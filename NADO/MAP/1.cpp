#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    map<string, int> m;
    map<string, int> :: iterator it;
    string s;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        m[s]++;
        cout << s << " " << m[s] <<endl;     
    }

}
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void bits(int n){
    int x;
    string s;
    while(n>0){
        x = n%2;
        s = s + char(x+48);
        n = n/2;
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
    
}

int main(){
    //freopen("output.txt", "w", stdout);
    int n;
    int x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    for_each(v.begin(),v.end(),bits);
}
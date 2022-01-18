#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char, int> a1,b1,c1;
    string a,b,c;
    cin >> a >> b >> c;
    for(int i=0;i<a.size();i++){
        a1[a[i]]=+1;
    }
    for(int i=0;i<b.size();i++){
        b1[b[i]]=+1;
    }
     for(int i=0;i<c.size();i++){
        c1[c[i]]=+1;
    }
    for(char c = '0';c <= 'z';c++){
        if(a1[c] > 0 && b1[c] > 0 && c1[c] > 0){
            cout << c;
        }
    }
    
    
}
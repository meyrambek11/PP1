#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int> v;
    vector<int> s;
    vector<int> f;
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        v.push_back(n);
    }
    for(int i =0;i<v.size()/2;i++){
        s.push_back(v[i]);
    }
    reverse(s.begin(),s.end());
    for(int i = v.size()/2;i<v.size();i++){
        f.push_back(v[i]);
    }
    reverse(f.begin(),f.end());
    for(int i = 0;i<s.size();i++){
        cout << s[i] << " ";
    }
    for(int i = 0;i<f.size();i++){
        cout << f[i] << " ";
    }
return 0;
}

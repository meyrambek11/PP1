#include <bits/stdc++.h>
using namespace std;

bool f(int k){
    for(int j=2;j<k;j++){
        if(k%j == 0){
            return true;
        }
    }
    return false;
}
int main(){
    freopen("output.txt","w",stdout);
    vector<int> v;
    int n;
    cin >> n;
    for(int i=2;i<=n;i++){
        if(f(i) == false){
            v.push_back(i);
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " is prime" << endl;
    }
}
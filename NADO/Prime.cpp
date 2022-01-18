#include <bits/stdc++.h>
using namespace std;

bool f(int n){
    if(n==0) return false;
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    if(f(n) == true){
        cout << "YES";
    }
    else
    cout << "NO";
    return 0;
}
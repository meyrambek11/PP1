#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    for(int i=n-1;i>=0;i--){
        for(int j=n;j>=i+1;j--){
            cout << "[*]";
        }
        cout << endl;
    }
}
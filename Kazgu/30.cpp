#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l=1;
    cin >> n;
    for(int i=1;i<=n;i++){
        l = l*i;   
    }
    cout << l  << endl;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    if(n>m){
        if(n%m == 0){
            cout << m << " sani " << n  << " sanina kaldiksiz bolinedi" << endl;
        }
        else
        cout << m << " sani " << n << " sanina bolinbeidi" << endl;
    }
    else
    cout << m << " > " << n << endl;
}
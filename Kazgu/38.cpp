#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x = 1,k;
    cin >> a >> b;
    for(int i=0;i<b;i++){
        k = a*x;
        x = k;
    }
    cout << k;
}
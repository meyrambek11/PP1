#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(b%a == 0){
        cout << b;
    }
    else{
        int k = b/a;
        cout << k*a;
    }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin >> n;
    d = n*30;
    if(d >= 180){
        cout << d - 180;
    }
    else{
        cout << d;
    }
    
}
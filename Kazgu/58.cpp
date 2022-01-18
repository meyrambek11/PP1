#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[18];
    for(int i=0;i<18;i++){
        cin >> a[i];
        if(a[i] < 2){
            a[i] = 3;
        }
        cout << a[i] << " ";
    }
    return 0;
}
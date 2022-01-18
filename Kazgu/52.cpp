#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[14];
    for(int i=0;i<14;i++){
        cin >> a[i];
        if(a[i]%2 == 0){
            cout << a[i] << " ";
        }
    }
    cout << endl;
    for(int i=0;i<14;i++){
        if(a[i]%2 != 0){
            cout << a[i] << " ";
        }
    }
    return 0;
}
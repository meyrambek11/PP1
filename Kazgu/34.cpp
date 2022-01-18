#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin >> a[i];
        cout << a[i]*a[i] << " ";
    }
    cout << endl;
    for(int i=0;i<10;i++){
        cout << a[i]*a[i]*a[i] << " ";
    }
    return 0;
}
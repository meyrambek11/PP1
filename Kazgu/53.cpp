#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        if(i < n/2){
            cout << a[i] << " ";
        }
    }
    cout << endl;
    for(int i=0;i<n;i++){
        if(i >= n/2){
            cout << a[i] << " ";
        }
    }
    return 0;
}
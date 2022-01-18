#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n,maxi = 0;
    int a[n];
    cin >> m;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i] > maxi){
            maxi = a[i];
        }
    }
    cout << maxi*m << endl;
}
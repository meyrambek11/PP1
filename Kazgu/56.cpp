#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[17],maxi = -1000000;
    for(int i=0;i<17;i++){
        cin >> a[i];
        if(a[i] > maxi){
            maxi = a[i];
        }
    }
    for(int i=0;i<17;i++){
        if(a[i] > 7){
            a[i] = maxi;
        }
        cout << a[i] << " ";
    }
}
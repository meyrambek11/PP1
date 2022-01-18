#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10],maxi = -1000000;
    for(int i=0;i<10;i++){
        cin >> a[i];
        if(a[i] < 0){
            if(a[i] > maxi){
                maxi = a[i];
            }
        }
    }
    cout << maxi;
}
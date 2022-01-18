#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[34],maxi = -1000000;
    for(int i=0;i<34;i++){
        cin >> a[i];
        if(i%2 != 0){
            if(a[i] > maxi){
                maxi = a[i];
            }
        }
    }
    cout << maxi;
}
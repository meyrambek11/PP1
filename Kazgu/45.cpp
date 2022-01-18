#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10],mini = 1000000,k;
    for(int i=0;i<10;i++){
        cin >> a[i];
        if(a[i] > 0){
            if(a[i] < mini){
                mini = a[i];
                k = i+1;
            }
        }
    }
    cout << k;
}
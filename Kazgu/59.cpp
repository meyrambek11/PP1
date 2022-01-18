#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[17];
    for(int i=0;i<17;i++){
        cin >> a[i];
        if(a[i] > 0){
            a[i] = 5;
        }
        else{
            a[i] = 0;
        }
        cout << a[i] << " ";
    }
}
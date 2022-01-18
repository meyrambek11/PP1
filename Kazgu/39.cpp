#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin >> a[i];
        if(a[i] > 0){
            cout << a[i]/2 << " ";
        }
        else if(a[i] < 0){
            cout << i << " ";
        }
    }
    return 0;
}
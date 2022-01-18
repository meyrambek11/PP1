#include <bits/stdc++.h>
using namespace std;
int main(){

    int a[10];
    for(int i=0;i<10;i++){
        cin >> a[i];
    }
    rotate(a,a+1,a+10);
    for(int i=0;i<10;i++){
        cout << a[i] << " ";
    }
    return 0;
}
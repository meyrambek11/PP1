#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[16],cnt = 0;
    for(int i=0;i<16;i++){
        cin >> a[i];
        if(a[i] > 0)break;
        cnt++;  
    }
    cout << cnt;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[100],cnt = 0;
    for(int i=0;i<100;i++){
        cin >> a[i];
        if(a[i] < 0){
            cnt++;
        }
    }
    cout << cnt;

}
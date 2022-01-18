#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[20],cnt = 0,sum = 0;
    for(int i=0;i<20;i++){
        cin >> a[i];
        if(a[i] < -5){
            cnt++;
            sum = sum + a[i];
        }
        else if(a[i]%5 == 0){
            cout << i << " ";
        }
    }
    cout << endl;
    cout << sum << " " << cnt;
    return 0;
}
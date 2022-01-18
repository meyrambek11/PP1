#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10],sum = 0,cnt = 0;
    for(int i=0;i<10;i++){
        cin >> a[i];
        if(a[i] > 0){
            sum = sum + a[i]*a[i];
            cnt++;
        }
    }
    cout << sum/cnt << endl;
}
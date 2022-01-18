#include <iostream>
using namespace std;
int main(){
    int x,cnt = 0;
    cin >> x;
    int a[x];
    for(int i=1;i<=x;i++){
        cin >> a[i];
    }
    for(int i=1;i<=x;i++){
        if(a[i]%3 == 0 || a[i]%7 == 0 || a[i]%5 ==0){
            cnt = cnt + a[i];
        }
    }
    cout << cnt;
    return 0;
}
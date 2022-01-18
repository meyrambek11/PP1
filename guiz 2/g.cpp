#include <iostream>
using namespace std;
int main(){
    int n,cnt = 0;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i = n;i>=1;i--){
        if(a[i]%2 == 0){
            cnt = cnt + a[i];

        }
    }
    cout << cnt;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n,m,k;
    int cnt=0,sum = 0;
    cin >> n >> m >> k;
    while(cnt >= n){
        cnt = cnt + m;
        cnt = cnt - k;
        sum++;
    }
    cout << sum;
    return 0;
}
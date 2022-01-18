#include <iostream>

using namespace std;

int main (){
    int n,l,r;
    cin >> n >> l >> r;
    int a[500500];
    long long sum = 0;

    for (int i=1; i<=n;++i){
        cin >> a[i];}
    for (int i=1;i<=r; ++i){
      if(i>=l && i<=r)
      sum += a[i];
    }
    cout << sum;
    return 0;
}
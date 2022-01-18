#include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    int a[500500];
    int maxi = -(1 << 30);
    for (int i=1;i<=n; ++i){
        cin >> a[i];

    }
    for(int i=1;i<=n;++i){
        maxi= max(maxi, a[i]);
    }
    cout << maxi;
    return 0;

}
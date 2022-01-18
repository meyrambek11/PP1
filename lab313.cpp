#include <iostream>

using namespace std;

int main() {
    int n,m;
    cin >> n;
    int a[500500],b[500500];
    
    for(int i=1;i<=n;++i){
        cin >> a[i];
    }
    cin >> m;
    for(int k=1;k<=m;++k){
        cin >> b[k];
    }
    for(int i=1;i<=n;++i)
    for(int k=1;k<=m;++k)
    cout << a[i] << b[k];
    return 0;
     
}
#include <iostream>

using namespace std;

int main(){
    int n,k,m;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;++i){
        cin >> a[i];
    }
    for(int i=1;i<=n;++i){
       if(a[i] == a[i+k]){
           a[i] = m;
       }
    }
    cout << m;
    return 0;
}
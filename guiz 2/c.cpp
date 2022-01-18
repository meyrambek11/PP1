#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,maxi = -1e+6;
    int m = -1e+6;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i] > maxi){
            maxi = a[i];
        }
    }
    
    for(int i=1;i<=n;i++){
        if(a[i] > m && a[i] < maxi){
            m = a[i];
        }
    }
    cout << m;
    return 0;

}
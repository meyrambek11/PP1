#include <iostream>
using namespace std;
int main(){
    int n,m=-1e+6;
    int sum = 0;
    cin >> n;
    int a[n];
    for(int i = 1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i] > m){
            m = a[i];
        }
    }
     for(int i=1;i<=n;i++){
        if(m == a[i]){
           sum = sum +1 ;
        }
    }
    
    cout << sum;
    return 0;
}
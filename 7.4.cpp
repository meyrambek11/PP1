#include <iostream>
using namespace std;
int main(){
    int x,sum = 0;
    cin >> x;
    int a[500500];
    for(int i=1;i<=x;i++){
        cin >> a[i];
    }
    
    for(int i=1;i<=x;i++){
        a[i] = a[i]*i;
        sum = sum + a[i];
        
    }
    cout << sum;
    
    return 0;
}
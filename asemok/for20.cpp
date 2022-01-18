#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
     int k = 1;
    for(int j = 1;j<=n;j++){
        k = k*j;
    }
    for(int j = 1;j<=n;j++){
        sum = sum +k;
    }
    cout << sum;
    
    
    
    return 0;
}
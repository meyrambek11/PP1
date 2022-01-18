#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
      if( a[i] == 0 || a[i] == 4 || a[i] == 6 || a[i] == 8 || a[i] == 9 ){
          sum = sum + a[i];
      } 
    }
    cout << sum;
    return 0;  
}
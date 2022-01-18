#include <iostream>
#include <algorithm>
using namespace std;

int real(int a[], int b[], int n ){
    int sum = 0;
    for(int i=1;i<=n;++i){
       sort(a, a+n);
       sort(b,b+n);
      if(a[i] == b[i]){
            sum = sum + 1;
        }
    }     
    
    return sum;
    
}
int main(){
    int n;
    int a[n];
    int b[n];
    cin >> n;
     for(int i=1;i<=n;++i){
         cin >> a[i];
     }
    for(int i=1;i<=n;++i){
        cin >> b[i];
    }
    cout << real(a , b ,n);
    return 0;
}
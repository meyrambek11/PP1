#include <iostream>
using namespace std;
int main(){
    int n;
    int cnt = 0;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        if(i%7 == 0){
           cnt = cnt + a[i];
        }
    }
    cout << cnt;
   
    return 0;
}
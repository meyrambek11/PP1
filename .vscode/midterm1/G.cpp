#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,cnt = 0;
    bool m;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i] == a[i+1]){
          cnt = cnt +1;
        }
    }
    if(cnt == n-1){
        m = true;
    }
    else{
        m = false;
    }
    if(m == true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int x,sum = 0;
    cin >> x;
    int a[x];
    for(int i=1;i<=x;++i){
        cin >> a[i];
    }
    for(int i=1;i<=x;++i){
        if(a[i] == 0 && a[i+1]==1){
            sum = sum + 1;
        }
    }
    for(int i=1;i<=x;++i){
        if(a[i-1] == 0 && a[i] == 1 && a[i+1] == 0){
            sum = sum - 1;
        }
    }
    cout << sum << endl;
    return 0;
}
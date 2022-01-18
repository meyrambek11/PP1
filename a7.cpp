#include <iostream>
using namespace std;
int main(){
    int x,k,l;
    int sum = 0;
    cin >> x >> k >> l;
    int a[x];
    for(int i=1;i<=x;i++){
        cin >> a[i];
    }
    for(int i=1;i<=x;i++){
        if(a[i] >= (l-k)){
            sum = sum + 1;
        }
    }
    cout << sum;
    return 0;

}
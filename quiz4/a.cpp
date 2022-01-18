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
        if(a[i] < 100 || a[i] > 1000){
            sum = sum + a[i];
        }
    }
    cout << sum << endl;
    return 0;
}
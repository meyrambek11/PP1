#include <iostream>
using namespace std;
int f(int a[]){
    int maxi = -1e+6;
    for(int i=1;i<=4;++i){
        maxi = max(maxi,a[i]);
    }
    return maxi;   
}
int main(){
    int a[500500];
    for(int i=1;i<=4;++i){
        cin >> a[i];
    }
   
    cout << f(a);
    return 0;
}
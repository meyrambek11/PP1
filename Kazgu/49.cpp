#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum = 0,mini = 1000000,k;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum = sum + a[i];
        if(a[i] < mini){
            mini = a[i];
            k = i+1;
        }
    }
    cout << "Arifmetikaluk ortasi " << sum/n << endl;
    cout << "En kop energia unemdegen nomeri "<< k <<"-kasiporun " << mini << " elektr energiasin zhumsagan" << endl;
}
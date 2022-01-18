#include <bits/stdc++.h>
using namespace std;

int f(int k, int f){
    return int(abs(k-f));
}
int main(){
     freopen("output.txt", "w", stdout);
    int n,sum = 0,m;
    float x;
    int a[n];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=1;i<n;i++){
        sum = sum + f(a[i],a[i-1]);
    }
    x = sum/m;
    cout << fixed << setprecision(2) << x << endl;
    return 0; 
}
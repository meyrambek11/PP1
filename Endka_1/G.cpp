#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> v;
    int n,m,sum=0;
    int a[n];
    float x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=1;i<n;i++){
        sum = sum + abs(a[i]-a[i-1]);    
    }
    x = sum/m;
    cout << fixed << setprecision(2) << x << endl;
}

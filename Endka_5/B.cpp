#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<double> v;
    int n;
    cin >> n;
    double x,sum = 0;
    for(int i=0;i<n;i++){
        cin >> x;
        sum += x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
       sum = sum + v[i];
    }
    double k = sum/n;
    cout << fixed << setprecision(2) << k << endl;
}
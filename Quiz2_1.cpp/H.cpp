#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int n,k,x;
    cin >> n >> k;
    for(int i = 0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout << v[k-1];
}
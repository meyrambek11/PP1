#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int n,a,sum = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    int x;
    cin >> x;
sort(v.begin(),v.end());    
reverse(v.begin(),v.end());
for(int i = 0;i<x;i++){
        sum = sum + v[i];
    }
    cout << sum;
    
    return 0;
}
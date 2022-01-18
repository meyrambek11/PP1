#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> v;
    int m,a;
    cin >> m;
    for(int i = 0;i<m;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}
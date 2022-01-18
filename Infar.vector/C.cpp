#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int> v;
    int n,a;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    reverse(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}
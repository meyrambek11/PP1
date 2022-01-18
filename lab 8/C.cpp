#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int x;
    cin >> x;
    int a;
    for(int i = 0;i<x;i++){
        cin >> a;
        v.push_back(a);
    }
    int n,m;
    cin >> n >> m;
    reverse(v.begin()+n,v.begin()+m+1);
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}
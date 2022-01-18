#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int a,n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    int x,y;
    cin >> x >> y;
    for(int j = 0;j<x;j++){
      cout << v[j] << " ";
    }
    cout << y << " ";
    for(int j = x;j<v.size();j++){
        cout << v[j] << " ";
    }
    return 0;
}
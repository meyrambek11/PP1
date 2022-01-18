#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    int x;
    int a,max = -1e+6, min = 1e+6;
    cin >> x;
    for(int i = 0;i<x;i++){
        cin >> a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        if(v[i] > max){
            max = v[i];
        }
        if(v[i] < min){
            min = v[i];
        }
    }
    cout << max - min;
    return 0;
}
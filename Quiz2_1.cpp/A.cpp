#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> v;
    int x;
    while(true){
        cin >> x;
        if(x == 0) break;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }
}
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
    reverse(v.begin(),v.end());
    for(int i=0;i<1;i++){
        cout << v[0];
    }
}
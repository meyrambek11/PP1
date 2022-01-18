#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int n , k, cnt = 0,a;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0;i<v.size();i++){
        if(v[i] == k){
            cnt++;
        }
    }
    cout << cnt;
    
}

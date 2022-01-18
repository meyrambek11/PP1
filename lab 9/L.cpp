#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<pair<int, int> > v;
    pair<int, int> p;
    int n,x,y;
    int k;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> x >> y;
       v.push_back(make_pair(x+y,i));  
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        cout << v[i].second+1 << " ";
    }
    


}
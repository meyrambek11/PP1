#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int n,a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    int x;
    cin >> x;
sort(v.begin(),v.end());    
for(int i = 0;i<x;i++){
         cout << v[i] << " ";
    }
    
    return 0;
       
        

}
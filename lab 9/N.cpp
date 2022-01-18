#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    map<int, int> m;
    vector<int> v;
    int n,cnt = 0;
    int x;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> x;
        m[x]++;
        v.push_back(x);
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
           if(m[(v[i]^v[j])] > 0){
               cnt++;
            }   
        }
    }
    
    cout << cnt;
      
}
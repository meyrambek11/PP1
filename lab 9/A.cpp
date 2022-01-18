#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
   vector<int> m;
   vector<int> n;
    int l;
    cin >> l;
    int s;
    int k;

    for(int i = 0; i < l; ++i){
        cin >> s >> k;
       m.push_back(s);
       n.push_back(k);

    }
    for(int i = 0;i < m.size()-1;i++){
        for(int j = i + 1;j<m.size();j++){
            if(m[i] > m[j]){
                swap(m[i],m[j]);
                swap(n[i],n[j]);
            }
            else if(m[i] == m[j]){
                if(n[i] > n[j]){
                   swap(m[i],m[j]);
                   swap(n[i],n[j]);
                }
            }
        }
    }
    for(int i = 0;i<l;i++){
        cout << m[i] << " " << n[i] << endl;
    }
       
    return 0;
}
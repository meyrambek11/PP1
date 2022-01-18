#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> s;
    vector<int> v;
    vector<int> z;
    vector<int> d;

    set<int> f;
    set<int> g;
    set<int> h;

    int n,x,y;
    cin >> n;
    for(int i = 1;i<=n;i++){
        d.push_back(i);
        
    }
    while(true){
        cin >> x;
        if(x == 0) break;
        s.push_back(x);
        h.insert(x);
    }
    while(true){
        cin >> y;
        if(y == 0) break;
        v.push_back(y);
        h.insert(y);
    }
    for(int i = 0;i<s.size();i++){
        for(int j = 0;j<v.size();j++){
            if(s[i] == v[j]){
                f.insert(s[i]);
            }
        }
    }
    set<int> :: iterator it;
    for(it = f.begin();it != f.end();it++){
        cout << (*it) << " ";
    }
    cout << endl;
    for(it = h.begin();it != h.end();it++){
        z.push_back(*it);
    } 
    for(int i = 0;i<d.size();i++){
        for(int j = 0;j<z.size();j++){
            if(d[i] == z[j]){
                d.erase(d.begin()+i);
            }
        }
    }    
    for(int i = 0;i<d.size();i++){
        cout << d[i] << " ";
    }

}
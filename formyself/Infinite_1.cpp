#include<iostream>
#include<vector>
using namespace std;

int x;
int f(vector<int> g, int i){
    if(g[0] == 0) return 0;
    return g[0] + f(g,i+1);

}
int main(){
    vector<int> v;
    
    while(cin >> x){
        if(x == 0) break;
        v.push_back(x);
    }
    cout << f(v,0);

    
    

}
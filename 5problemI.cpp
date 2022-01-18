#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string n,m;
    string l,k;
    cin >> n >> m;
    for(int i=0;i<=n.size();++i){
        sort(n.begin(),n.end());}
    for(int j=0;j<=m.size();++j){
        sort(m.begin(),m.end());
    }
    if(n == m){
        cout << "YES";
    }
    else
    cout << "NO";    
    return 0;

}
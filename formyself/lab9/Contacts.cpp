#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<string> v;
    
    int n,cnt = 0;
    string s;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> s;
        v.push_back(s);
    }
    set<string> q(v.begin(),v.end());
    set<string> :: iterator it;
    for(it = q.begin();it != q.end();it++){
        if(count(v.begin(),v.end(),(*it)) == 3){
            cnt++;
        }
    }
    cout << cnt;
}
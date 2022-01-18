#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<string> v;
    
    int n,cnt = 0;
    cin >> n;
    string c;
    for(int i=0;i<n;i++){
        cin >> c;
        v.push_back(c);
    }
    set<string> s(v.begin(),v.end());
    set<string> :: iterator it;
    for(it  = s.begin(); it != s.end();it++){
        if(count(v.begin(),v.end(),(*it)) == 3){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
    
}


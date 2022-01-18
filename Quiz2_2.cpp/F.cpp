#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    map<string, int> m;
    map<string, int>::iterator it;

    int maxi = 0, mn = 1000000, cmin = 0, cmax = 0;
    int n;
    cin >> n;
    string s;
    for(int i = 0;i<n;i++){
        cin >> s;
        m[s]++;
        int sz = s.size();
        maxi = max(maxi, sz);
        mn = min(mn, sz);
    }
    for(it = m.begin();it != m.end();it++){
        if((*it).first.size() == mn)
        {
            cmin = max(cmin, (*it).second);
        }

        if((*it).first.size() == maxi)
        {
            cmax = max(cmax, (*it).second);
        }
    }

    if(cmin >= cmax) cout << "My type!";
    else cout << "Not my type";

}
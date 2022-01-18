#include <bits/stdc++.h>
using namespace std;
int main(){
    map<pair<pair<string, int>,pair<string,int> >, int>  m;
    int n;
    string s,c;
    int x,y;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s >> x >> c >> y;
        m[(make_pair(make_pair(s,x),make_pair(c,y)))]=x+y;
    }
    map<pair<pair<string, int>,pair<string,int> >, int > :: iterator it;
    for(it = m.begin();it != m.end();it++){
        cout << (*it).first.first.first << " and "<< (*it).first.second.first << " " << (*it).second << endl;

    }
}
#include <iostream>
#include <map>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   map<string, int> m;

    map<string, int> ::iterator it;

    int n;
    cin >> n;
    string s;
    int k;

    for(int i = 0; i < n; ++i){
        cin >> s >> k;
        m[s] += k;
    }
    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}
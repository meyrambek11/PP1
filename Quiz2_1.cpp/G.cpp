#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    map<string, string> m;
    string s,ss, t;
    int n,x;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> s;
        cin >> x;
        for(int j=0; j<x; j++){
            cin >> ss;
            m[ss] = s;
        }
    }
    int y;
    cin >> y;
    cout << y << endl;
    for(int i = 0;i<y;i++){
        cin >> t;
        if(m[t] == "") cout << "Unknown\n";
        else cout << m[t] << endl;
    }

}

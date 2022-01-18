#include <iostream>
#include <vector>

using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    vector<string> v;
    vector<string> q;
    int x,y;
    cin >> x;
    string s;
    for(int i = 0;i<x;i++){
        cin >> s;
        v.push_back(s);
    }
    cin >> y;
    for(int i = 0;i<y;i++){
        cin >> s;
        q.push_back(s);
    }
    for(int i = 0;i<q.size();i++){
        for(int j = 0;j<v.size();j++){
             if(q[i] == v[j]){
                 cout << q[i] << endl;
             }

        }
    }
}
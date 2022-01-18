#include <bits/stdc++.h>
using namespace std;
int main(){
    
    set<string> q;
    vector<string> v1;
    vector<string> v2;
    string s;
    for(int i=0;i < 1e+6; i++){
        cin >> s;
        if(i%2 == 0){
            if(!q.count(s)){
                v1.push_back(s);
                q.insert(s);
            }
        }
        else{
            if(!q.count(s)){
                v2.push_back(s);
                q.insert(s);
            }
        }

    }
    cout << "Aida" << endl;
    for(int x = 0;x<v1.size();x++){
        cout << v1[x] << endl;
    }
    cout << "Aizhan" << endl; 
    for(int j = 0;j<v2.size();j++){
        cout << v2[j] << endl;
    }
}
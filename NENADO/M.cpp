#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    queue<string> q;
    int n,m;
    string s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        if(m == 1){
            cin >> s;
            q.push(s);
            cout << q.front() << endl;
        }
        else if(m == 2){
            q.pop();
            if(!q.empty()){
                cout << q.front() << endl;
            }
            else
            cout << "queue is empty" << endl;
        }
    }
    

}
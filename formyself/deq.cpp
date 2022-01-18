#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<string> q;
    int n,x;
    string s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s >> x;
        if(x == 1){
            q.push_front(s);
        }
        if(x == 0){
            q.push_back(s);
        }
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop_front();
    }
    return 0;


}
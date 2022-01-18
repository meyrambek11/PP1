#include <iostream>
#include <deque>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    deque<string> q;
    int n,x;
    string s;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> s >> x;
        if(x == 1){
            q.push_front(s);
        }
        else if(x == 0){
            q.push_back(s);
        }
    }
    while(!q.empty()){
            cout << q.front() << " ";
            q.pop_front();
    }
}
#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<string> q;
    int n;
    int k;
    string s;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> k;
        if(k == 1){
            cin >> s;
            q.push(s);
            cout << q.front() << endl;
        }
        else if(k == 2){
            if(q.empty()){
                cout << "queue is empty" << endl;
                 
            }
            else {
                q.pop();
                if(q.empty()){
                  cout << "queue is empty" << endl;
                }
                else{
                cout << q.front() << endl;
                }
            }
        }
    }
    
    
}
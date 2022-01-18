#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    set<string> s;
    int n;
    cin >> n;
    string c;
    
    for(int i = 0;i<n;i++){
        cin >> c;
        if(s.find(c) == s.end()){
            s.insert(c);
            cout << "new user added" << endl;
        }
        else{
            cout << "user already exists" << endl;
        }
    }
    return 0;
}
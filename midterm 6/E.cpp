#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int> q;
    int n;
    cin >> n;
    int m;
    for(int i=0;i<n;i++){
        cin >> m;
        v.push_back(m);
        q.push_back(m);
    }
    reverse(v.begin(),v.end());
    if(v == q){
        cout << "Palindrome";
    }
    else 
    cout << "Not palindrome";
}
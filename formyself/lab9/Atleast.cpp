#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    set<int> s;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0;i<n;i++){
        if(a[i] == a[i+1]){
            s.insert(a[i]);
        }
    }
    cout << s.size();
}
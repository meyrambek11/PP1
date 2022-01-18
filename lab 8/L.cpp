#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;
    int n;
    cin >> n;
    int x,cnt = 0;
    for(int i=0;i<n;i++){
        cin >> x;
        s.insert(x);
    }
    for(int i = 0;i<s.size();i++){
        cnt++;
    }
    cout << cnt;
    return 0;

}

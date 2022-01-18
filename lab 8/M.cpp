#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;
    int n;
    cin >> n;
    int x,sum = 0;
    for(int i=0;i<n;i++){
        cin >> x;
        s.insert(x);
    }
    set<int>::iterator it = s.begin();
    for(it = s.begin(); it != s.end(); ++it){
        sum = sum + *it;
    }
    cout << sum;
    
    return 0;

}
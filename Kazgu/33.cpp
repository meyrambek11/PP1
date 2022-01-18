#include <bits/stdc++.h>
using namespace std;
int main(){
    double s,sum = 0;
    int n;
    cin >> s >> n;
    for(int i=1;i<=n;i++){
        s = s + s*0.9;
    }
    cout << s << endl;
}
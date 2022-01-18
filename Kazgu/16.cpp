#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    double k,n;
    cin >> x >> y >> z;
    int sum = x+y+z;
    int mink = min(x,y);
    int mini = min(mink,z);
    if(sum > 1){
        k = (sum - mini)/2;
        cout << k;
        return 0;
    }
    else{
        n = (sum - mink)/2;
        cout << n << endl;
    }
}
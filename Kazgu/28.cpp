#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a >= b && b>= c && c >= d ){
        cout << 0 << " " << 0 << " " << 0 << " " << 0; 
    }
    else if(a < b && b < c && c < d){
        cout << a+1 << " " << b+1 << " " << c+1 << " " << d+1 << endl;
    }
    else
    cout << a-1 << " " << b-1 << " " << c-1 << " " << d-1 << endl;
    return 0;
}
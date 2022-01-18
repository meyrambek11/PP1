#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int maxi = max(max(a,b),c);
    if(a <= b && b <= c){
        cout << a*a << " " << b*b << " " << c*c << endl;
    }
    else if(a > b && b > c){
        cout << maxi << " " << maxi << " " << maxi;
    }
    else
    cout << (-1)*a << " " << (-1)*b << " " << (-1)*c;
}
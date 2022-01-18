#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int maxi = max(max(a,b),max(c,d));
    if(a <= b && b <= c && c <= d ){
        cout << maxi << " " << maxi << " " << maxi << " " << maxi;
    }
    else if(a > b && b > c & c > d){
        cout << a << " " << b << " " << c << " " << d;
    }
    else
    cout << a*a << " " << b*b << " " << c*c << " " << d*d;
    return 0;

}